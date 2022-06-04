#include <stdio.h>
#include <stdlib.h>

#include "heap.h"

#define a_size 15

int main() {
    int array[a_size] = {27, 24, 29, 28, 22, 27, 20, 19, 28, 16, 20, 29, 26, 18, 25};

    _heapSort(array, a_size);

    for (int j = 0; j < a_size; ++j) {
        printf("%d - ", array[j]);
    }
    printf("\n");
    

    return 0;
}