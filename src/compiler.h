#ifndef COMPILER_H
#define COMPILER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <getopt.h>
#include <ctype.h>
#include "y.tab.h"

#define TEMPORARY_FILE ".comp_mid.tmp.c"

struct compiler_data {
    char* input;
    char* output;
    bool keep;
} compiler_data;

FILE* temp_file;

extern FILE* yyinput;

#endif