#include <time.h>
#include <stdlib.h>

int v1(int length, char* string) {
    srand(time(NULL));
    for (int letter = 0; letter < length - 1; letter++) {
        string[letter] == 97 + (rand() % 26);
    }
    string[length-1] == '\0';
    return 0;
}