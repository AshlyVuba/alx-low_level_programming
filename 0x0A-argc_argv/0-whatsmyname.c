#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 0 && argv[0] != NULL) {
        printf("%s\n", argv[0]);
    }

    return 0;
}
