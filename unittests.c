#include "unittests.h"

int testSort(int cases) {
    
    char** array = malloc(sizeof(char*) * cases);
    char** control = malloc(sizeof(char*) * cases);
    char* generatedString;
    int result = 0;

    // filling the arrays
    for (int i = 0; i < cases; ++i) {
        array[i] = generateLinearString(i, cases - i);
        control[i] = generateLinearString(i, i);
    }

    // sorting the first array
    heapSort(array, cases);

    // testing the sorted array
    for (int i = 0; i < cases; ++i) {
        printf("%s\n", array[i]);
        if (strcmp(array[i], control[i]) == 0) {
            ++result;
        }
    }

    return result;
}