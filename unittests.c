#include "unittests.h"

int _testSort(int cases) {
    int* array = malloc(sizeof(int) * cases);
    int* control = malloc(sizeof(int) * cases);
    int result = 0;

    for (int i = 0; i < cases; ++i) {
        array[i] = cases - (i + 1);
        control[i] = i;
    }

    _heapSort(array, cases);

    for (int i = 0; i < cases; ++i) {
        printf("%d\t::\t%d\n", array[i], control[i]);
        if (array[i] == control[i]) {
            ++result;
        }
    }
    return result;
}

int testSort(int cases) {
    
    char** array = malloc(sizeof(char*) * cases);
    char** control = malloc(sizeof(char*) * cases);
    int result = 0;

    // filling the arrays
    for (int i = 0; i < cases; ++i) {
        array[i] = generateLinearString(i + 2, i);
        control[i] = generateLinearString(i + 2, i);
        printf("Verify: %s\n\n", array[i]);
    }

    // sorting the first array
    heapSort(array, cases);

    // testing the sorted array
    for (int i = 0; i < cases; ++i) {
        if (strcmp(array[i], control[i]) == 0) {
            ++result;
        }
    }

    return result;
}