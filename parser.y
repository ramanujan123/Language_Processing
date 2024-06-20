%{
#include <stdio.h>
#include <string.h>

int flag=0; 
  char numToString[80]={ };
  int yydebug = 1;
  int sCounter = 0;
  int lCounter = 0;
  char* Temp();
  char* label;
  char* label1;
  char* label2;
   char* Label();
   char var[100][50];
int var_no=0;
char* store;

void validvar(char* str, int p);

%}

%start P

%union {
    struct quadruple {
        int num;
        int isnum;
        char* arg1;
        char* arg2;
        char* arg3;
        char* arg4;
        char* result;
    } tuple;
}

%type <tuple> P HEADERS REST FUNC STMT DECLS2 RETURNSTMT STMTS DECLR DECLS INS E

%left '+' '-'
%left '*' '/' '%'
%left '(' ')'

%token <tuple> IF_STMT
%token <tuple> CASE
%token <tuple> SWITCH_STMT
%token <tuple> DEFAULT_STMT
%token <tuple> CONTINUE
%token <tuple> WHILE_STMT
%token <tuple> BREAK
%token <tuple> DO
%token <tuple> FOR_LOOP
%token <tuple> STRINGLITERAL
%token <tuple> DT
%token <tuple> RETURN_STMT
%token <tuple> NOT
%token <tuple> out_token
%token <tuple> in_token
%token <tuple> IDENTIFIER
%token <tuple> LOP
%token <tuple> end_token
%token <tuple> COP
%token <tuple> UOP
%token <tuple> BOP
%token <tuple> COM
%token <tuple> HEAD
%token <tuple> NUMBER
%token <tuple> AOP
%token <tuple> EQU
%token <tuple> cpp_header
%token <tuple> cpp_std
%token <tuple> ELSE_STMT
%token OUTPUT INPUT

%%

P: HEADERS REST
   | COMMENTS HEADERS REST

HEADERS: HEAD
    | HEAD HEADERS
    | /*epsilon*/

REST: REST REST
    | STMT
    | COMMENTS
    | FUNC
    | /*epsilon*/

FUNC: DT IDENTIFIER '(' DECLS2 ')' '{' STMTS '}'
    | DT IDENTIFIER '(' ')' '{' STMTS '}' 


DECLR: DT DECLS ';'

DECLS2: DT IDENTIFIER { validvar($2.result, 1); }
    | DT IDENTIFIER ',' DECLS2 { validvar($2.result, 1); }

DECLS:IDENTIFIER EQU E { validvar($1.result,1);if($3.isnum==1){printf("%s = %d\n",$1.result,$3.result);} else {printf("%s = %s\n",$1.result,$3.result);} }
     |IDENTIFIER {validvar($1.result,1);}
     |IDENTIFIER','DECLS {validvar($1.result,1);}
     |IDENTIFIER EQU E',' DECLS {validvar($1.result,1);if($3.isnum==1){printf("%s = %d\n",$1.result,$3.result);} else {printf("%s = %s\n",$1.result,$3.result);} }
     
STMT: E ';'
    | IDENTIFIER AOP EQU E ';' {validvar($1.result,0);}
    | IDENTIFIER EQU E ';' { validvar($1.result,0);printf("%s = %s\n",$1.result,$3.result);}
    | IF_STMT '(' E {$3.arg1 = Temp(); printf("%s=!%s\n", $3.arg1, $3.result);label = Label(); label1 = Label(); $3.arg3 = label1; $3.arg2 = label; printf("If %s Goto %s \n", $3.arg1, label); }')' '{' STMTS '}' {printf("goto %s\n",$3.arg3);printf("\n%s :\n",$3.arg2);} ELSE_STMT '{'STMTS'}' {printf("goto %s\n",$3.arg3); printf("\n%s :\n",$3.arg3); }
    | WHILE_STMT {label = Label(); $1.arg1 = label; printf("\n%s:\n",$1.arg1);} '(' E {$4.arg1 = Temp(); printf("%s = !%s\n",$4.arg1,$4.result);} { label = Label(); $1.arg2 = label; printf("if %s Goto %s\n",$4.arg1,$1.arg2);} ')' '{' STMTS '}' { printf("Goto %s\n \n%s:\n",$1.arg1,$1.arg2);}
    | DO '{' STMTS '}' WHILE_STMT '(' E ')' ';'
    | FOR_LOOP '(' DECLR {label = Label(); $1.arg1 = label; printf("\n%s:\n",$1.arg1);} E {label = Label(); $5.arg1 = label; label = Label(); $1.arg2= label; printf("if %s Goto %s\n Goto %s\n",$5.result,$5.arg1,$1.arg2);} ';'  {label = Label(); $5.arg2 = label; printf("\n%s:\n",$5.arg2);} E {printf("Goto %s\n",$1.arg1);} ')' '{' {printf("\n%s:\n",$5.arg1);} STMTS {printf("goto %s\n \n%s:\n",$5.arg2,$1.arg2);} '}'
    | FOR_LOOP '('  E ';' E ';' E ')' '{' STMTS '}'
    | SWITCH_STMT '(' E {$3.arg1= Temp(); store=$3.result;}')' '{' CASESTMTS '}' 
    | BREAK ';'{printf("break ;\n");}
    | CONTINUE ';'
    | FUNC
    | RETURNSTMT
    | OUTPUT IDENTIFIER ';'
    | OUTPUT STRINGLITERAL ';'
    | INPUT IDENTIFIER ';'
    | COM
    | DECLR
    | cpp_header
    | cpp_std
    | out_token
    | in_token
    | end_token
    
CASESTMTS: CASESTMTS CASESTMT
    | CASESTMT
    | /* epsilon */
CASESTMT: CASE E {label=Label(); $2.arg1=label; printf("if %s == %s goto %s\n%s: \n",store,$2.result,$2.arg1,$2.arg1);}':' STMTS 
    | DEFAULT_STMT {label=Label(); printf("%s:\n",label);}':' STMTS {label =Label(); printf("%s:\n",label);}

RETURNSTMT: RETURN_STMT ';'
    | RETURN_STMT E ';' {printf("return %s\n",$2.result);}

IDENTIFIERS :',' IDENTIFIER IDENTIFIERS
			  | /*epsilon*/

STMTS: /*epsilon*/
    | STMT STMTS

E: IDENTIFIER {validvar($1.result,0);$$.result=$1.result;}
    | IDENTIFIER '(' E ')'
    | IDENTIFIER '(' ')'
    | UOP IDENTIFIER { validvar($2.result,0);printf("%s%s\n",$1.result,$2.result); }
    | IDENTIFIER UOP { validvar($1.result,0);printf("%s%s\n",$1.result,$2.result); } 
    | E AOP E { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d %s %s\n",$$.result,$1.num,$2.result,$3.result);}else { printf("%s = %s %s %s\n",$$.result,$$.arg1,$2.result,$$.arg2);}}
 |E COP E { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d %s %s\n",$$.result,$1.num,$2.result,$3.result);}else { printf("%s = %s %s %s\n",$$.result,$$.arg1,$2.result,$$.arg2);}}
 |E LOP E { if($3.isnum == 1){ $$.arg3 = Temp(); $$.result = Temp(); printf("%s = %s %s %d\n",$$.result,$1.result,$2.result,$3.num);}else {  $$.result = Temp(); printf("%s = %s %s %s\n",$$.result,$1.result,$2.result,$3.result);}}
 |E BOP E { if($3.isnum == 1){ $$.arg3 = Temp(); $$.result = Temp(); printf("%s = %s %s %d\n",$$.result,$1.result,$2.result,$3.num);}else {  $$.result = Temp(); printf("%s = %s %s %s\n",$$.result,$1.result,$2.result,$3.result);}}
 |NOT E {  if($2.isnum == 1){ $$.result = Temp(); printf("%s = %s %d\n",$$.result,$1.result,$2.result);}else {  $$.result = Temp(); printf("%s = %s %s\n",$$.result,$1.result,$2.result);}}
 | '(' E ')'
    | NUMBER { sprintf(numToString,"%d",$1.num); $1.isnum = 1; $1.arg1 = numToString; $1.result = numToString;$$.result=$1.result;}
 | STRINGLITERAL 

COMMENTS : /*epsilon*/
    | COM COMMENTS

%%

char* Temp() {
    sCounter++;
    char* temp = (char*)malloc(10 * sizeof(char));
    sprintf(temp, "t%d", sCounter);
    return temp;
}

char* Label() {
    lCounter++;
    char* temp = (char*)malloc(10 * sizeof(char));
    sprintf(temp, "L%d", lCounter);
    return temp;
}

void validvar(char* str, int p) {
    int j = 0, flag = 0;
    while (j < var_no) {
        if (strcmp(var[j], str) == 0) {
            flag = 1;
            break;
        }
        j++;
    }

    if (p == 1 && flag == 1) {
        yyerror(strcat(str, " - error: variable already declared!"));
        return;
    } else if (p == 0 && flag == 0) {
        yyerror(strcat(str, " - Error: variable not defined!"));
        return;
    } else if (p == 1) {
        strcpy(var[var_no++], str);
    }
    return;
}
void main() 
{ 


  printf("\n\n"); 
   yyparse(); 
   if(flag==0) 
   	printf("\ncpp code is correct syntactically\n\n"); 
} 
  
void yyerror( char *s) 
{ 
   extern int yylineno;
   extern char* yytext;
   fprintf(stderr,"%s on lines %d-%d near \'%s\'\n",s,yylineno-1,yylineno, yytext);
  
   flag=1; 
} 


