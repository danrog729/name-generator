#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "generators.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Wrong number of arguments.\n");
        return -1;
    }
    printf("arg0 = %s\n", argv[0]);
    printf("arg1 = %s\n", argv[1]);
    if (!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")) {
        printf("Generates a new random word/name. Usage is as follows:\n");
        return 0;
    }
    if (!strcmp(argv[1], "v1")) {
        printf("Generating using generator v1\n");
        char* string = malloc(10);
        if (string != NULL) {
            printf("Memory successfully allocated\n");
            v1(10, string);
            printf("version 1'd\n");
            printf("%s", string);
        }
        else {
            printf("No memory.\n");
            return -1;
        }
    }
    else {
        printf("Invalid argument");
        return -1;
    }
    return 0;
}