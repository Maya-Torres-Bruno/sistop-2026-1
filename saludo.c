#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf("Hola y bienvenido %s!\n", argv[1]);
    } else {
        printf("Hola mundo\n");
    }
    return 0;
}

