#include "compiler.h"

void argParser(int argc, char *argv[], struct compiler_data * comp) {

    if(argc == 1) {
        fprintf(stdout, "Remember to enter the path of the file to compile as the 1st argument, please.\n");
	    exit(1);
    }

    comp->input = argv[1];
    comp->keep = false;
    comp->output = "a.out";
    opterr = 0;

    static const struct option op_list[] = {
        {.name = "keep", .has_arg = no_argument, .val = 'k'},
        {.name = "output", .has_arg = required_argument, .val = 'o'},
        {0,                 0,                          ,   0},
    };

    while(1) {
        int args = getopt_long(argc, argv, ":o:k", op_list, NULL);
        if (args == -1)
            break;
        switch (args) {
        case 'k':
            comp->keep = true;
            break;
        case 'o':
            comp->output = optarg;
            break;
        case ':':
            fprintf(stdout, "Option '%s' requieres an argument\n", argv[optind - 1]);
            break;
        case '?': 
        default:
            fprintf(stdout, "Option '%s' is not available\n", argv[optind - 1]);
            exit(1);
        }
    }
}

void initializeFiles(char * inputFile) {
    FILE * read_file = fopen (inputFile, "r");
    if (read_file == NULL) {
        fprintf(stdout, "ERROR: The file you asked for cannot be opened.\n");
        exit(1);
    }

    yyinput = read_file;

    temp_file = fopen(TEMPORARY_FILE, "w");
    if (temp_file == NULL) {
        fprintf(stdout, "ERROR: The temporary file could not be opened.\n");
        exit(1);
    }
}

void freeResources() {
    fclose(temp_file);
    fclose(yyinput);
}

void compileToC(char * output, bool keep) {
    char command_buffer[256];
    sprintf(command_buffer, "gcc %s -o %s", TEMPORARY_FILE, output);

    int gccStatus = system(command_buffer);

    if(!keep && remove(TEMPORARY_FILE)) {
        printf ("ERROR: Could not eliminate intermediate file.\n");
        exit(1);
    }

    if(gccStatus != 0) {
        printf ("ERROR: Could not compilate intermediate file.\n");
        exit(1);
    }
}

int main(int argc, char *argv[]) {
    argParser(argc, argv, &comp);
    initializeFiles(comp.input);
    yyparse();
    freeResources();
    compileToC(comp.output, comp.keep);
    return 0;
}