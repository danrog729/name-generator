#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "generators.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Wrong number of arguments. You gave %d while there should be 1 argument.\n", argc - 1);
        return -1;
    }
    if (!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")) {
        printf("Generates a new random word/name. Usage is as follows:\n");
        return 0;
    }
    if (!strcmp(argv[1], "v1")) {
        srand(time(NULL));
        int stringLength = 1 + (rand() % 20);
        char* string = malloc(stringLength);
        if (string != NULL) {
            v1(stringLength, string);
            printf("%s\n", string);
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