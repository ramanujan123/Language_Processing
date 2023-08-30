# CS251: Introduction to Language Processing

## Lex code to perform lexival analysis of c++

lex cpp_lexical_analyzer.l - used for generating the lexer code
gcc lex.yy.c -o file_name -ll - used for compiling the lexer code
./file_name - for running the lexer compiled lexer code

if input string = "<iostream>" or "<bits/stdc++.h>" - Header
if input string = struct|if|else|switch|while|for|do - Keywords
if input string = int|double|float|char - dataType
if input string = stack|queue|vector - dataStructure
if the input string satisfies none of the above conditions but can be represeted in form of [_a-zA-Z][_a-zA-Z0-9]* then  will be **Identifier**
