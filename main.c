#include <stdio.h>
#include <stdlib.h>

#include "heap.h"
#include "stringops.h"
#include "unittests.h"

int main() {

    FILE *data = fopen("runtime.csv", "a+");
    long long tStart;
    long long tStop;
    unsigned long size = 100000;
    char** array = malloc(sizeof(char*) * size);

    // generating array
    for (unsigned long i = 0; i < size; ++i) {
        array[i] = generateRandomString(16);
    }

    // start timer
    tStart = timeInMilliseconds();
    
    //sort
    heapSort(array, size);

    // stop timer
    tStop = timeInMilliseconds();
    
    // print to terminal and file
    printf("Time needed: %lld ms\n", tStop - tStart);

    fprintf(data, "%ld, %lld\n", size, tStop - tStart);
    fclose(data);

    return EXIT_SUCCESS;
}