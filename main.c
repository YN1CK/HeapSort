#include <stdio.h>
#include <stdlib.h>

#include "heap.h"
#include "stringops.h"
#include "unittests.h"

#define a_size 15

int main() {

    unsigned long cases  = 8000;
    int result = testSort(cases);

    printf("%d / %lu successful\n", result, cases);

    return EXIT_SUCCESS;
}