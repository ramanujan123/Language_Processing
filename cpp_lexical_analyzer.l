%{
#include <stdio.h>
#include <string.h>
%}

%%
"<iostream>" { printf("'<iostream>': HEADER\n"); }
"<bits/stdc++.h>" { printf("'<bits/stdc++.h>': HEADER\n"); }
#include { printf("'%s': INCLUDE\n", yytext); }
"if" { printf("'%s': if\n", yytext); }
"else" { printf("'%s': else\n", yytext); }
"switch" { printf("'%s': switch\n", yytext); }
"while" { printf("'%s': while\n", yytext); }
"for" { printf("'%s': for\n", yytext); }
"do" { printf("'%s': do\n", yytext); }

"struct"|"union"|"object"  { printf("'%s': keyword\n", yytext); }

"int"|"double"|"float"|"char" { printf("'%s': datatype\n", yytext); }

"stack"|"queue"|"vector"|"string" { printf("'%s': datastructure\n", yytext); }

"return" { printf("'%s': return_next\n", yytext); }

"true"|"false" { printf("'%s': bool_value\n", yytext); }

[_a-zA-Z][_a-zA-Z0-9]*    { printf("'%s': identifier\n", yytext); }
[0-9]+    { printf("'%s': integer constant\n", yytext); }
[0-9]+\.[0-9]+    { printf("'%s': float constant\n", yytext); }

\"(\\.|[^\"])*\"    { printf("'%s': string constant\n", yytext); }
\'(\\.|[^\'])*\'    { printf("'%s': character constant\n", yytext); }
"==" { printf("'%s': equal_to_symbol\n", yytext); }
[+\-*/=<>&|]    { printf("'%s': operator\n", yytext); }
[;(),{}]    { printf("'%s': delimiter\n", yytext); }

\/\/[^\n]*    { printf("'%s': comment\n", yytext); }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/    { printf("'%s': comment\n", yytext); }

[a-zA-Z_][a-zA-Z0-9_]*\s*\([^)]*\)\s*\{   { printf("'%s': function declaration\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]*\s*\([^)]*\)       { printf("'%s': function invocation\n", yytext); }

[ \t\n]+   { /* Ignore whitespace */ }
.          { /* Ignore other characters */ }	
%%

int yywrap(void) {}
int main() {
    yylex();
    return 0;
}
