#include "compiler.h"

void helpGuide() {
    fprintf(stdout,
        "C-mplify Help Guide:\n"
        "\n"
        "   -h               Prints available commands and exits.\n"
        "   -k               Flag indicates user wishes to keep temporary file after conversion.\n"
        "   -r <new_name>    Flag indicates user wishes to rename the output file. Default: a.out.\n");
    exit(1);
}


void openParser(int argc, char *argv[], struct compiler_data * comp) {
    if(argc == 1) {
        fprintf(stdout, "Remember to enter the path of the file to compile as the 1st argument, please.\n");
	    exit(1);
    }

    comp->input = argv[1];
    comp->keep = false;
    comp->output = "a.out";

    while(true) {
        int c = getopt(argc, argv, ":r:kh");
        if (c == -1)
            break;
        switch (c) {
        case 'k':
            comp->keep = true;
            break;
        case 'r':
            comp->output = optarg;
            break;
        case 'h':
            helpGuide();
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

void initializeFiles(char* input_file) {
    FILE* read_file = fopen (input_file, "r");
    if (read_file == NULL) {
        fprintf(stdout, "ERROR: The file you asked for cannot be opened.\n");
        exit(1);
    }
    yyin = read_file;
    temp_file = fopen(TEMPORARY_FILE, "w");
    if (temp_file == NULL) {
        fprintf(stdout, "ERROR: The temporary file could not be opened.\n");
        exit(1);
    }
}

void gccCompilation(char* output_file) {
    char line_command[255];
    sprintf(line_command, "gcc %s -o %s", TEMPORARY_FILE, output_file);

    int ret = system(line_command);
    if(ret != 0) {
        fprintf(stdout, "ERROR: Could not compilate temporary file.\n");
        exit(1);
    }
}

void closeParser(bool keep) {
    if(!keep && remove(TEMPORARY_FILE)) {
        fprintf(stdout, "ERROR: Could not eliminate temporary file.\n");
        exit(1);
    }
    fclose(temp_file);
    fclose(yyin);
}

int main(int argc, char *argv[]) {
    struct compiler_data comp;
    openParser(argc, argv, &comp);
    initializeFiles(comp.input);
    yyparse();
    gccCompilation(comp.output);
    closeParser(comp.keep);
    return 0;
}