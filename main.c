#include <stdio.h>
#include <stdlib.h>

#include "heap.h"
#include "stringops.h"
#include "unittests.h"

int main() {

    unsigned long cases[] =  {100000, 200000, 300000, 
                            400000, 500000, 600000, 
                            700000, 800000, 900000, 
                            1000000, 2000000, 4000000, 8000000};

    for (int i = 0; i < 13; ++i) {
        testSpeed(cases[i]);
    }

    return EXIT_SUCCESS;
}