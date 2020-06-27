
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
%token add sub mult div t_string t_int T_string T_int t_scanf t_printf increase decrease open_while close_while open_if close_if add sub mult div and or equal neq seq smaller beq bigger main_fun ret_type open_args close_args comma close_par open_par open_fun function ret end_func end
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

DEF_VARS :

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

VAR : DECLARE											{
	| ASSIGN

DECLARE : TYPE ASSIGN									{	}




EVALUATE : EXP COMPARATOR_OP EXP						{	$$ = newNode(EMPTY_TYPE, NULL);
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

COMPARATOR_OP : equal									{	$$ = newNode(AS_READ_TYPE, "==");}
		| neq											{	$$ = newNode(AS_READ_TYPE, "!=");}
		| bigger										{	$$ = newNode(AS_READ_TYPE, ">");}
		| smaller										{	$$ = newNode(AS_READ_TYPE, "<");}
		| beq											{	$$ = newNode(AS_READ_TYPE, ">=");}
		| seq											{	$$ = newNode(AS_READ_TYPE, "<=");}
		;
%%

