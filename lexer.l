%{
	#include<stdio.h>
	#include "y.tab.h" 
	 
	 
%}
%option yylineno


KeywT "auto"|"include"|"enum"|"register"|"typedef"|"extern"|"return"|"signed"|"void"|"static"|"default"|"goto"|"sizeof"|"volatile"|"const"|"short"

DataT "int"|"char"|"float"|"double"|"long"

returnT "int"|"char"|"float"|"double"|"long"|"struct"|"union"

idenT ([a-zA-Z_])[a-zA-Z0-9_]*
%x C
%%

"/*"][.]*"*/"	{return COM;}
"/*"		{BEGIN C;}
<C>"*/"	{BEGIN 0; return COM;}
<C>\n		{;}
<C>.		{;}
\/\/.*		{return COM;}
"#include<"[ ]*[a-z]+".h"[ ]*">"|"#include <"[ ]*[a-z]+".h"[ ]*">"  {return HEAD;}
{DataT} {return DT;}
"struct"|([a-zA-Z_])[a-zA-Z0-9_]*(\[[1-9][0-9]*\])+|"union"|{returnT}[ ]*[*]+[ ]*{idenT} {printf("%s\t Derived Data Type\n", yytext);}

"else" {return ELSE_STMT;}
"if" {return IF_STMT;}
"case" {return CASE;}
"switch" {return SWITCH_STMT;}
"<<endl;" {return end_token;}
"continue" {return CONTINUE;}
"while" {return WHILE_STMT;}
"break" {return BREAK;}
"do" {return DO;}
"for" {return FOR_LOOP;}
"default" {return DEFAULT_STMT;}
"return" {return RETURN_STMT;}
"<<" {return out_token;}
">>" {return in_token;}
"cout<<" {return OUTPUT;}
"#include<bits/stdc++.h>" {return cpp_header;}
"using namespace std" {return cpp_std;}
"cin>>" {return INPUT;}

{KeywT} {printf("\n%s\tOTHER KEYWORD\n",yytext);} 	
"&"{idenT} {printf("%s\tADDRESS\n",yytext);}			
"||"|"&&" {yylval.tuple.result = strdup(yytext);return LOP;}
"!" {yylval.tuple.result = strdup(yytext);return NOT;}
">="|">"|"<="|"<"|"=="|"!=" {yylval.tuple.result = strdup(yytext);return COP;}
"=" {yylval.tuple.result = strdup(yytext);return EQU;}
"++"|"--" {yylval.tuple.result = strdup(yytext);return UOP;}
"+"|"-"|"/"|"*"|"%"  {yylval.tuple.result = strdup(yytext); return AOP;}	
"^"|"|"|"&"|"~"|">>"|"<<" {yylval.tuple.result = strdup(yytext);return BOP;}				
{idenT} {yylval.tuple.result = strdup(yytext);return IDENTIFIER;} 
"\""([^"\\]|\\.)*"\"" {yylval.tuple.result = strdup(yytext);return STRINGLITERAL;}
[0-9]+|[0-9]+"."[0-9]+|[0-9]+x[0-9A_F] {yylval.tuple.num= atoi(yytext);return NUMBER;}


[ \t\n] ; 
  


. {return yytext[0];}

											
%%
int yywrap() 
{ 
 return 1; 
} 

