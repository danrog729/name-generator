#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Wrong number of arguments.");
        return -1;
    }
    printf("arg0 = %s", argv[0]);
    printf("arg1 = %s", argv[1]);
    return 0;
}