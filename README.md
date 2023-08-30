# CS251: Introduction to Language Processing

## Lex code to perform lexival analysis of c++

lex cpp_lexical_analyzer.l - used for generating the lexer code__
gcc lex.yy.c -o file_name -ll - used for compiling the lexer code__
./file_name - for running the lexer compiled lexer code__

## Rules followed for creating the regular expressions

if input string = "<iostream>" or "<bits/stdc++.h>" - Header__
if input string = struct|if|else|switch|while|for|do - Keywords__
if input string = int|double|float|char - dataType__
if input string = stack|queue|vector - dataStructure__
if the input string satisfies none of the above conditions but can be represeted in form of [_a-zA-Z][_a-zA-Z0-9]* then  will be **Identifier**
if the input string can be represented in form of [0-9]+ then - Integer constant
if the input sting satisfies [0-9]+\.[0-9]+ then - float constant
" - symbol represents string
' - symbol represents char
if input belongs to [+\-*/=<>&|^] it is called **operator**
if input belongs to [;(),{}] it is classified as **delimeter**
\\ - symbol represents that all the characters after it in its line are to be considered comment and hence is ignored while compiling
\t and \n - symbols are representing whitespaces and hence they are ignored
