#ifndef VARIABLE_HANDLER_H
#define VARIABLE_HANDLER_H

#include <string.h>
#include <stdbool.h>

#define MAX_INDEX 50

extern void yyerror(const char * s);

typedef enum operation {
    ADD, 
    SUB, 
    MULT, 
    DIV,
} operation;

struct var {
    char* value;
    int type;
} var;

struct var table[MAX_INDEX];

struct Node* intOp(struct Node* n1, struct Node* n2, operation op);  

int mainFunc();

int getType(char* value);

int addVariable(char* value, int type);

struct Node* divExp(struct Node* n1, struct Node* n2);

struct Node* multExp(struct Node* n1, struct Node* n2);

struct Node* subExp(struct Node* n1, struct Node* n2);

struct Node* addExp(struct Node* n1, struct Node* n2);

static char* newScan = "char* newScan(){\n" 
"char* str = (char*)malloc(15);\n"
"scanf(\"%s\", str);\n"
 "return str;\n}\n";

 static char* stringConcat = "char* stringConcat(char* str1, char* str2){\n"
 "char* new_str = malloc (strlen(str1) + strlen(str2) + 1);\n"
 "strcat(new_str, str1);\n"
 "strcat(new_str, str2);\n"
 "return new_str;\n}\n";         

#endif