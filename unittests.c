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

int testSort(unsigned long cases) {
    
    char** array = malloc(sizeof(char*) * cases);
    char** control = malloc(sizeof(char*) * cases);
    char* tmp;
    unsigned long result = 0;

    // filling the arrays
    for (unsigned long i = 0; i < cases; ++i) {
        tmp = generateLinearString(16, i);
        array[i] = tmp;
        control[i] = tmp;
    }

    // scrambling array
    for (unsigned long i = 0; i < (cases / 2) - 1; ++i) {
        swap(&array[i], &array[cases-(i+1)]);
    }

    // sorting the first array
    heapSort(array, cases);

    // testing the sorted array
    for (unsigned long i = 0; i < cases; ++i) {
        if (strcmp(array[i], control[i]) == 0) {
            ++result;
        } else {
            printf("ERROR: %s, %s\n\n", array[i], control[i]);
        }
    }

    return result;
}

long long timeInMilliseconds(void) {
    struct timeval tv;

    gettimeofday(&tv,NULL);
    return (((long long)tv.tv_sec)*1000)+(tv.tv_usec/1000);
}