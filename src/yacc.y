
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
%token add sub mult div t_string t_int defined t_scanf t_printf increase decrease open_while close_while open_if close_if add sub mult div and or equal neq seq smaller beq bigger main_fun open_args close_args comma close_par open_par open_fun function ret end_func end
%token<value> int_var string_var var_name
%type<node> PROGRAM DEF_VARS
%start PROGRAM


/* Precedence of symbols */
%left add sub
%left mult div
%nonassoc equal neq beq bigger smaller seq
%left and
%left or
%left xor

/* Productions */

PROGRAM	: DEF_VARS GLOB_VARS DEF_FUNCS MAIN FUNCS		{	$$ = newNode(EMPTY_TYPE, NULL);
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
	;

OP : EXP add EXP										{	$$ = addExp($1, $3);}
   | EXP sub EXP										{	$$ = subExp($1, $3);}
   | EXP mult EXP										{	$$ = multExp($1, $3);}
   | EXP div EXP										{	$$ = divExp($1, $3);}
   ;

TYPE : t_string											{	$$ = newNode(STR_TYPE, "char* ");}
	 | t_int 											{	$$ = newNode(INT_TYPE, "int ");}


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

COMP : equal											{	$$ = newNode(AS_READ_TYPE, "==");}
	 | neq												{	$$ = newNode(AS_READ_TYPE, "!=");}
	 | bigger											{	$$ = newNode(AS_READ_TYPE, ">");}
	 | smaller											{	$$ = newNode(AS_READ_TYPE, "<");}
	 | beq												{	$$ = newNode(AS_READ_TYPE, ">=");}
	 | seq												{	$$ = newNode(AS_READ_TYPE, "<=");}
	 ;
%%

void headers() {
	fprintf(temp_file, "#include <stdio.h> \n"
	"#include <stdlib.h> \n"
	"#include <string.h> \n");
}

