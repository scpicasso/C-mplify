#ifndef VARIABLE_HANDLER_H
#define VARIABLE_HANDLER_H

#include "node.h"
#include <string.h>
#include <stdbool.h>

#define MAX_INDEX 50

extern void yyerror(char * s);

enum operations {
    ADD, 
    SUB, 
    MULT, 
    DIV,
} operation;

struct var {
    char* final_value;
    int type;
} var;

var table[MAX_INDEX];
int index = 0;

bool main_called = false;

Node* intOp(Node* n1, Node* n2, operation op);                                  

#endif