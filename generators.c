#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int v1(int length, char* string) {
    srand(time(NULL));
    for (int letter = 0; letter < length - 1; letter++) {
        char character = 97 + (rand() % 26);
        string[letter] = character;
    }
    string[length-1] == '\0';
    return 0;
}