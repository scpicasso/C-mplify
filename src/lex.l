%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"

    extern void yyerror(const char* s);
%}

%option yylineno
%x comment

digit			[0-9]
alpha			[a-zA-Z]
space			[ \t]
newline         [\n]

%%

"/*"                    BEGIN(comment);
<comment>[^*\n]*        {}
<comment>"*"+[^*/\n]*   {}
<comment>\n             ;
<comment>"*"+"/"        BEGIN(INITIAL);

{space}+            ;
{newline}           ;

\"[^"]*\"               {   char * str = malloc(strlen(yytext)+1);
                            strcpy(str, yytext);
                            yylval.value = str;
                            return string_var;
                        }

"i "                    {return t_int;}
"s "                    {return t_string;}
"def "                  {return def;}
"r "                    {return t_scanf;}
"w "                    {return t_printf;}
"++"                    {return increase;}
"--"                    {return decrease;}
"l "                    {return open_while;}
"cl"                    {return close_while;}
"c "                    {return open_if;}
"cc"                    {return close_if;}
" + "                     {return add;}
" - "                     {return sub;}
" * "                     {return mult;}
" / "                     {return divi;}
" a "                   {return and;}
" o "                   {return or;}
" = "                   {return equal;}
" ! "                   {return neq;}
" <= "                  {return seq;}
" < "                   {return smaller;}
" >= "                  {return beq;}
" > "                   {return bigger;}
"main "                 {return main_func;}
", "                    {return comma;}
"("                     {return open_par;}
")"                     {return close_par;}
"{"                     {return fuopen;}
"func "                 {return is_fun;}
"ret"                   {return t_ret;}
"}"                   {return fuclose;}
"."                     {return end;}

-?{digit}+                      {   char* str = malloc(strlen(yytext)+1);
			                        strcpy(str, yytext);
			                        yylval.value = str;
			                        return int_var; 
                                }

{alpha}({alpha}|{digit}|'_')*   {   char* str = malloc(strlen(yytext)+1);
			                        strcpy(str,yytext);
			                        yylval.value = str;
			                        return var_name; 
                                }

.                               {   yyerror("Invalid character\n"); }

%%

int yywrap(void){
	return 1;
}
