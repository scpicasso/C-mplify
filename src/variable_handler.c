#include "variable_handler.h"
#include "node.h"

bool main_called = false;
int var_index = 0;

struct Node* addExp(struct Node* n1, struct Node* n2) {
    struct Node* n;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        n = intOp(n1, n2, ADD);
    } 
    else {
        yyerror("Addition between incompatible types cannot be executed.\n");
    }

    return n;
}

struct Node* subExp(struct Node* n1, struct Node* n2) {
    struct Node* n;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        n = intOp(n1, n2, SUB);
    } 
    else {
        yyerror("Substraction between incompatible types cannot be executed.\n");
    }
    return n;
}

struct Node* multExp(struct Node* n1, struct Node* n2) {
    struct Node* n;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        n = intOp(n1, n2, MULT);
    }
    else {
        yyerror("Multiplication between incompatible types cannot be executed.\n");
    }

    return n;
}

struct Node* divExp(struct Node* n1, struct Node* n2) {
    struct Node* n;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        n = intOp(n1, n2, DIV);
    } 
    else {
        yyerror("Divition between incompatible types cannot be executed.\n");
    }

    return n;
}

struct Node* intOp(struct Node* n1, struct Node* n2, operation op) {
    struct Node* n;
    if (n1->value != NULL && n2->value != NULL) {
        int op1 = atoi(n1->value);
        int op2 = atoi(n2->value);
        char* final_value = malloc(18);
        int res;
        switch(op) {
            case ADD:
                res = op1+op2;
                break;
            case SUB:
                res = op1-op2;
                break;
            case MULT:
                res = op1*op2;
                break;
            case DIV:
                res = op1/op2;
                break;
        }
        sprintf(final_value, "%d", res);
        n = newNode(INT_TYPE, final_value);
    } 
    else {
        n = newNode(INT_TYPE, NULL);
        append(n, n1);
        char* str;
        switch(op) {
            case ADD:
                str = " + ";
                break;
            case SUB:
                str = " - ";
                break;
            case MULT:
                str = " * ";
                break;
            case DIV:
                str = " / ";
                break;
        }
        append(n, newNode(READ_AS_TYPE, str));
        append(n, n2);
    }
    return n;
}

int addVariable(char* value, int type) {
    if (var_index == MAX_INDEX)
        return -1;
    table[var_index].value = value;
    table[var_index].type = type;
    var_index++;
    return 1;
}

int getType(char* value) {
    for (int i = 0; i < var_index; i++) {
        if (strcmp(value, table[i].value) == 0) {
            return table[i].type;
        }
    }
    return -1;
}

int mainFunc() {
    if(main_called) {
        return -1;
    }
    else {
        main_called = true;
        return 1;
    }
}