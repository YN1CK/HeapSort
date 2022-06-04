#include <stdio.h>
#include <stdlib.h>

#include "heap.h"

int main() {

    int* a = malloc(sizeof(int*));
    int* b = malloc(sizeof(int*));

    *a = 3;
    *b = 6;
    printf("%d, %d\n", *a, *b);
    _swap(a, b);
    printf("%d, %d\n", *a, *b);

    *a = 5;
    *b = 2;
    printf("%d, %d\n", *a, *b);
    _swap(a, b);
    printf("%d, %d\n", *a, *b);

    *a = 10;
    *b = 10;
    printf("%d, %d\n", *a, *b);
    _swap(a, b);
    printf("%d, %d\n", *a, *b);

    return 0;
}