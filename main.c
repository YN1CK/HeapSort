#include <stdio.h>
#include <stdlib.h>

#include "heap.h"

#define a_size 15

int main() {
    int array[a_size] = {1, 15, 2, 14, 3, 13, 4, 12, 5, 11, 6, 10, 7, 9, 8};

    _heapify(array, 0, a_size);

    for (int j = 0; j < a_size; ++j) {
        printf("%d - ", array[j]);
    }
    printf("\n");
    

    return 0;
}