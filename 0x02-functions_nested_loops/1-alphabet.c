#include <stdio.h>
#include "main.h"

int print_alphabet(void) {
    char c = 'a';
    while (c <= 'z') {
        putchar(c);
        c++;
    }
    putchar('\n');
    return 0;
}

