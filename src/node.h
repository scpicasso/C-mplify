#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include "compiler.h"

enum types {
	EMPTY_TYPE, 
	READ_AS_TYPE, 
	STR_TYPE,
	INT_TYPE,
	} type;

struct Node {
	type type;
	char* value;
	struct Node* next;
    struct Node* prev;
	struct Node* left_child;
    struct Node* parent;
} Node;

extern FILE* temp_file; 

#endif