#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Hello world\n");
    } else if (argc == 2) {
        printf("Hello, %s\n", argv[1]);
    } else {
        printf("Hello, %s\n", argv[1]);
        printf("You are %s year old\n", argv[2]);
    }

    return 0;
}