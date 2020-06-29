
%{
	#include <stdio.h>
    #include "node.h"
    #include "operations.h"    
    #include "compiler.h"

    extern int lineCount;

    int yylex();
	void yyerror(char * s);
    void printHeaders();
%}

%union {
	struct Node * node;
	char * value;
}


/* Tokens */
%token add sub mult div t_string t_int defined t_scanf t_printf increase decrease open_while close_while open_if close_if and or equal neq seq smaller beq bigger main_fun comma close_par open_par open_fun function ret end_func end

%token<value> int_var string_var var_name

%type<node> PROGRAM DEF_VARS GLOB_VARS DEF_FUNCS FUNCS MAIN DEF_VAR VARS VAR EXP ARGS TYPE BODY COMP EVALUATE OP LINE BLOCK IFBLOCK WHILEBLOCK DECLARE ASSIGN PRINT SCAN RET

%start PROGRAM


/* Precedence of symbols */
%left add sub
%left mult div
%nonassoc equal neq beq bigger smaller seq
%left and
%left or

/* Productions */

PROGRAM	: DEF_VARS GLOB_VARS DEF_FUNCS FUNCS MAIN		{	$$ = newNode(EMPTY_TYPE, NULL);
															append($$, $1);
															append($$, $2);
															append($$, $3);
															append($$, $4);
															append($$, $5);
															headers();
															inorder($$);
														}
		;

DEF_VARS : DEF_VAR end DEF_VARS							{	$$ = newNode(EMPTY_TYPE, NULL);
															append($$, $1);
															append($$, newNode(READ_AS_TYPE,"\n"));
															append($$,$3);
														}
		 |												{	$$ = NULL;}
		 ;

DEF_VAR : defined var_name EXP							{	if(addVariable($2, $3->type) == -1) {							
																yyerror("Variable limit surpassed \n");
															}
															$$ = newNode($3->type, NULL);
															append($$, newNode(READ_AS_TYPE, "#define "));
															append($$, newNode(READ_AS_TYPE, $2));
															append($$, newNode(READ_AS_TYPE, " "));
															append($$, $3);
														}
		;

GLOB_VARS : VARS										{	$$ = $1;}
		  |												{	$$ = NULL;} 
		  ;

VARS : VAR end VARS 									{	$$ = newNode(EMPTY_TYPE, NULL);
															append($$, $1);
															append($$, newNode(READ_AS_TYPE, ";\n"));
															append($$, $3);
														}
	 |													{	$$ = NULL;}
	 ;

VAR : DECLARE											{	$$=$1;}
	| ASSIGN											{	$$=$1;}
	;

DECLARE : TYPE var_name EXP								{	if(addVariable($2, $1->type) == -1) {														yyerror("Variable limit surpassed \n");
															}
															if($3 != NULL && ($1->type != $3->type)) {
																yerror("Cannot assign incompatible types \n");
															}
															$$ = newNode($3->type, NULL);
															append($$, $1);
															append($$, newNode(READ_AS_TYPE, $2));
															append($$, newNode(READ_AS_TYPE, " = "));
															append($$, $3);
														}
		| TYPE var_name									{	if(addVariable($2, $1->type) == -1) {												yyerror("Variable limit surpassed \n");
															}
															$$ = newNode($3->type, NULL);
															append($$, $1);
															append($$, newNode(READ_AS_TYPE, $2));
														}
		;

ASSIGN : var_name EXP									{	int var_type = getType($1);
															if(var_type == -1) {
																yerror("Undeclared variable \n");
															}
															if(var_type != $3->type) {
																yerror("Cannot assign incompatible types \n");
															}
															$$ = newNode($2->type, NULL);
															append($$, newNode(READ_AS_TYPE, $1));
															append($$, newNode(READ_AS_TYPE, " = "));
															append($$, $2);
														}
		;

EXP : string_var										{	$$ = newNode(STR_TYPE, $1;}
	| int_var											{	$$ = newNode(INT_TYPE, $1);}
	| var_name											{	int var_type = getType($1);
															if (type == -1) {
																yerror("Undeclared variable");
															}
															$$ = newNode(type, NULL);
															append($$, newNode(READ_AS_TYPE, $1));
														}
	| open_par EXP close_par							{
															$$ = $2;
															if ($2->value == NULL) {
																$$ = newNode(AS_READ_TYPE, "("));
																append($$, $2);
																append($$, newNode(AS_READ_TYPE,")"));
															}
														}
	| OP 												{	$$ = $1;}
	| EVALUATE											{	$$ = $1;}
	;

OP : EXP add EXP										{	$$ = addExp($1, $3);}
   | EXP sub EXP										{	$$ = subExp($1, $3);}
   | EXP mult EXP										{	$$ = multExp($1, $3);}
   | EXP div EXP										{	$$ = divExp($1, $3);}
   ;

TYPE : t_string											{	$$ = newNode(STR_TYPE, "char* ");}
	 | t_int 											{	$$ = newNode(INT_TYPE, "int ");}
	 ;


EVALUATE : EXP COMP EXP									{	$$ = newNode(EMPTY_TYPE, NULL);
															if ($1->type == INT_TYPE && $3->type == INT_TYPE) {
																append($$, $1);
																append($$, $2);
																append($$, $3);
															}
															else if ($1->type == STR_TYPE && $3->type == STR_TYPE) {
																append($$, newNode(AS_READ_TYPE, "strcmp("));
																append($$, $1);
																append($$, newNode(AS_READ_TYPE,", "));
																append($$, $3);
																append($$, newNode(AS_READ_TYPE, ")"));
																append($$, $2);
																append($$, newNode(AS_READ_TYPE, "0"));	
															}
															else {
																yyerror("Comparing incompatible types");
															}
														}

		 | EVALUATE and EVALUATE						{	$$ = newNode(EMPTY_TYPE, NULL);
					 										append($$,$1);
					 										append($$, newNode(AS_READ_TYPE, "&&"));
					 										append($$,$3);
					 									}

		 | EVALUATE or EVALUATE							{	$$ = newNode(EMPTY_TYPE, NULL);
					 										append($$,$1);
					 										append($$, newNode(AS_READ_TYPE, "||"));
					 										append($$,$3);
					 									}
		 ;

COMP : equal											{	$$ = newNode(AS_READ_TYPE, "==");}
	 | neq												{	$$ = newNode(AS_READ_TYPE, "!=");}
	 | bigger											{	$$ = newNode(AS_READ_TYPE, ">");}
	 | smaller											{	$$ = newNode(AS_READ_TYPE, "<");}
	 | beq												{	$$ = newNode(AS_READ_TYPE, ">=");}
	 | seq												{	$$ = newNode(AS_READ_TYPE, "<=");}
	 ;

DEF_FUNCS : DEF_FUNC end DEF_FUNCS 						{	$$ = newNode(EMPTY_TYPE, NULL);
															append($$, $1);
															append($$, newNode(READ_AS_TYPE, ";\n"));
															append($$, $3);
														}
	 	  |												{	$$ = NULL;}
	      ;

DEF_FUNC : var_name TYPE open_par ARGS close_par		{	if(addVariable($1, $2->type) == -1) {							
																yerror("Variable limit surpassed \n");
															}
															$$ = newNode(TYPE_EMPTY, NULL);
															append($$, $2);
															append($$, newNode(READ_AS_TYPE, $1));
															append($$, newNode(READ_AS_TYPE, "("));
															append($$, $4);
															append($$, newNode(READ_AS_TYPE, ")"));
															}
		 ;

ARGS : ARG comma ARGS 									{	$$ = newNode(EMPTY_TYPE, NULL);
															append($$,$1);
															append($$, newNode(READ_AS_TYPE, ","));
															append($$, $3);
														}
	 |													{	$$ = NULL;}
	 ;

ARG : TYPE var_id										{	if(addVariable($1, $2->type) == -1) {
																yerror("Variable limit surpassed \n");
															}

															$$ = newNode(EMPTY_TYPE, NULL);
															append($$,$1);
															append($$, newNode(READ_AS_TYPE, $2));
														}
	;

FUNCS : FUNC FUNCS 										{	$$ = newNode(EMPTY_TYPE, NULL);
															append($$, $2);
															append($$, $3);
														}
	  |													{	$$ = NULL;}
	  ;

FUNC : var_name TYPE open_par ARGS close_par open_fun BODY end_fun	{	$$ = newNode(EMPTY_TYPE, NULL);
																		append($$, $2);
																		append($$, newNode(READ_AS_TYPE, $1));
																		append($$, newNode(READ_AS_TYPE, "("));
																		append($$, $4);
																		append($$, newNode(READ_AS_TYPE, ")"));
																		append($$, newNode(READ_AS_TYPE, "{ \n"));
																		append($$, $7);
																		append($$, newNode(READ_AS_TYPE, "\n} \n"));
																	}
	 ;

BODY : LINE end BODY												{	$$ = newNode(EMPTY_TYPE, NULL);
																		append($$, $1);
																		append($$, newNode(READ_AS_TYPE, ";\n"));
																		append($$, $3);
																	}
	 | BLOCK BODY													{	$$ = newNode(EMPTY_TYPE, NULL);
	 																	append($$, $1);
	 																	append($$, 2);
	 																}
	 |																{	$$ = NULL;}
	 ;

LINE : ASSIGN 														{	$$ = $1;}
	 | DECLARE 														{	$$ = $1;}
	 | INC 															{	$$ = $1;}
	 | DEC 															{	$$ = $1;}
	 | PRINT 														{	$$ = $1;}
	 | SCAN 														{	$$ = $1;}
	 | RET 															{	$$ = $1;}
	 ;

INC : var_name increase												{	if(getType($1) != INT_TYPE) {
																			yerror("This operation is only for int types \n");

																		}
																		append($$, newNode(AS_READ_TYPE, $1));
																		append($$, newNode(AS_READ_TYPE, "++"));
																	}
	;

DEC : var_name decrease												{	if(getType($1) != INT_TYPE) {
																			yerror("This operation is only for int types \n");

																		}
																		append($$, newNode(AS_READ_TYPE, $1));
																		append($$, newNode(AS_READ_TYPE, "--"));
																	}
	;

PRINT : w open_par EXP close_par									{	$$ = newNode(EMPTY_TYPE, NULL);
																		if($3->type == INT_TYPE) {
																			append($$, newNode(READ_AS_TYPE, "printf(\"%d\", "));
																		}
																		else if($3->type == STR_TYPE) {
																			append($$, newNode(READ_AS_TYPE, "printf(\"%s\", "));
																		}
																		append($$, $3);
																		append($$, newNode(READ_AS_TYPE, ")"));
																	}
	  ;

SCAN : r open_par var_name close_par								{	int type = getType($3);
																		if(type == -1) {
																			yerror("Undeclared variable\n");
																		}
																		else if(type != STR_TYPE) {
																			yerror("Incompatible type\n");
																		}
																		$$ = newNode(EMPTY_TYPE, NULL);
																		append($$, newNode(AS_READ_TYPE, "scanf(\"%s\", &");
																		append($$, newNode(AS_READ_TYPE, $3));
																		append($$, newNode(AS_READ_TYPE, ")"));
																	}
	 ;

RET : ret EXP														{	$$ = newNode(EMPTY_TYPE, NULL);
																		append($$, newNode(READ_AS_TYPE, "return "));
																		append($$, $2);
																	}	
	;

BLOCK : IFBLOCK														{	$$ = $1;}
	  |	WHILEBLOCK													{	$$ = $1;}
	  ;

IFBLOCK : open_if EVALUATE end BODY close_if						{	$$ = newNode(EMPTY_TYPE, NULL);
																		append($$, newNode(READ_AS_TYPE, "if("));
																		append($$, $2);
																		append($$, newNode(READ_AS_TYPE, ") {/n"));
																		append($$, $4);
																		append($$, newNode(READ_AS_TYPE, "}\n"));
																	}
		;

WHILEBLOCK : open_while EVALUATE end BODY close_while				{	$$ = newNode(EMPTY_TYPE, NULL);
																		append($$, newNode(READ_AS_TYPE, "while("));
																		append($$, $2);
																		append($$, newNode(READ_AS_TYPE, ") {/n"));
																		append($$, $4);
																		append($$, newNode(READ_AS_TYPE, "}\n"));
																	}
		;


MAIN : main_fun TYPE open_par ARGS close_par open_fun BODY end_fun 	{	$$ = newNode(EMPTY_TYPE, NULL);
																		if(mainFunc() < 0) {
																			yerror("There should be only one main function");
																		}
																		append($$, $2);
																		append($$, newNode(READ_AS_TYPE, $1));
																		append($$, newNode(READ_AS_TYPE, "("));
																		append($$, $4);
																		append($$, newNode(READ_AS_TYPE, ")"));
																		append($$, newNode(READ_AS_TYPE, "{ \n"));
																		append($$, $7);
																		append($$, newNode(READ_AS_TYPE, "\n} \n"));
																	}
	 ;

%%

void headers() {
	fprintf(temp_file, "#include <stdio.h> \n"
	"#include <stdlib.h> \n"
	"#include <string.h> \n");
}

