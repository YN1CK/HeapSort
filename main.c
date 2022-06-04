#include <stdio.h>
#include <stdlib.h>

#include "heap.h"

#define a_size 15

char* generateString(int n, int base) {
    const char* literals = "abcdefghijklmnopqrstuvwxyz";
    char* tmp = malloc(sizeof(char) * n);
    for (int i = 0; i < n-1; ++i) {
        *(tmp + sizeof(char) * i) = literals[base+i];
    }
    tmp[n-1] = '\0';
    return tmp;
}

int main() {
    char** array[a_size];
    for (int i = 0; i < a_size; ++i) {
        array[i] = generateString(20-i, 20 - (int)(i/2) + 2);
    }
    
    heapify(array, 0, a_size);
    for (int i = 0; i < a_size; ++i) {
        printf("%s\n", array[i]);
    }
    
    return 0;
}