%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"

    extern void yyerror(char * s);
    int lineCount = 1;
%}


%option
%x comment

digit			[0-9]
alpha			[a-zA-Z]
space			[ \t]
newline         [\n]

%%

"/*"                    BEGIN(comment);
<comment>[^*\n]*        {}
<comment>"*"+[^*/\n]*   {}
<comment>\n             lineCount++;
<comment>"*"+"/"        BEGIN(INITIAL);

{space}+            
{newline}           {lineCount++;}

\"[^"]*\"                          {   char * str = malloc(strlen(yytext)+1);
                                    strcpy(str, yytext);
                                    yylval.value = str;
                                    return cadena;
                                }

"i "                    {return t_int;}
"s "                    {return t_string;}
"I "                    {return T_int;}
"S "                    {return T_string}
"r "                    {return t_scanf;}
"w "                    {return t_printf;}
"++"                    {return increase;}
"--"                    {return reduce;}
"l "                    {return open_while;}
"cl"                    {return close_while;}
"c "                    {return open_if;}
"cc"                    {return close_if;}
"+"                     {return add;}
"-"                     {return sub;}
"*"                     {return mult;}
"/"                     {return div;}
" a "                   {return and;}
" o "                   {return or;}
" = "                   {return equal;}
" ! "                   {return neq;}
" <= "                  {return seq;}
" < "                   {return smaller;}
" >= "                  {return beq;}
" > "                   {return bigger;}
"main "                 {return main_fun;}
"returns "              {return ret_type;}
"args "                 {return open_args;}
", "                     {return close_args;}
"cargs"                 {return close_args;}
"("                     {return open_par;}
")"                     {return close_par;}
":"                     {return open_fun;}
"func "                 {return function;}
"ret"                   {return ret;}
"end"                   {return end_func;}
"."                     {return end;}

-?{digit}+                      {   char * str = malloc(strlen(yytext)+1);
			                        strcpy(str, yytext);
			                        yylval.value = str;
			                        return entero; }

{alpha}({alpha}|{digit}|'_')*       {   char * str = malloc(strlen(yytext)+1);
			                        strcpy(str,yytext);
			                        yylval.value = str;
			                        return var_id; }

.                               {   yyerror("Invalid character\n"); }

%%

int yywrap(void){
	return 1;
}