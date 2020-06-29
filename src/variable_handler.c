#include "variable_handler.h"

Node* addExp(Node* n1, Node* n2) {
    Node* ret;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        ret = intOp(n1, n2, ADD);
    } 
    else if (n1->type == STR_TYPE && n2->type == STR_TYPE) {
        if (n1->value != NULL && n2->value != NULL) {
            int len1 = strlen(n1->value);
            char* value = malloc(len1 + strlen(n2->value)-1);
            strncpy(value, n1->value, len1 - 1);
            strcpy(value + len1 - 1, n2->value + 1);
            ret = newNode(STR_TYPE, value);
        } 
        else if (n1->value == NULL && n2->value != NULL) {
            ret = newNode(STR_TYPE, n2->value);
        }
        else if (n2->value == NULL && n1->value != NULL) {
            ret = newNode(STR_TYPE, n1->value);
        }
        else {
            ret = newNode(STR_TYPE, NULL);
        }
    } 
    else {
        yyerror("Addition between incompatible types cannot be executed.\n");
    }

    return ret;
}

Node* subExp(Node* n1, Node* n2) {
    Node* ret;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        ret = intOp(n1, n2, SUB);
    } 
    else {
        yyerror("Substraction between incompatible types cannot be executed.\n");
    }
    return ret;
}

Node* multExp(Node* n1, Node* n2) {
    Node* ret;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        ret = intOp(n1, n2, MULT);
    }
    else {
        yyerror("Multiplication between incompatible types cannot be executed.\n");
    }

    return ret;
}

Node* divExp(Node* n1, Node* n2) {
    Node* ret;
    if (n1->type == INT_TYPE && n2->type == INT_TYPE) {
        ret = intOp(n1, n2, DIV);
    } 
    else {
        yyerror("Divition between incompatible types cannot be executed.\n");
    }

    return ret;
}

Node* intOp(Node* n1, Node* n2, operation op) {
    Node* ret;
    if (n1->value != NULL && n2->value != NULL) {
        int op1 = atoi(n1->value);
        int op2 = atoi(n2->value);
        char* final_value = malloc(15);
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
        ret = newNode(INT_TYPE, final_value);
    } 
    else {
        ret = newNode(INT_TYPE, NULL);
        append(ret, n1);
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
        append(ret, newNode(AS_READ_TYPE, str));
        append(ret, n2);
    }
    return ret;
}

int addVariable(char* value, int type) {
    if (index == MAX_INDEX)
        return -1;
    table[index].value = value;
    table[index].type = type;
    index++;
    return 1;
}

int getType(char* value) {
    for (int i = index-1; i>-1; i--) {
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