#include <stdio.h>
#include <stdlib.h>

#include "heap.h"
#include "stringops.h"
#include "unittests.h"

#define a_size 15

int main() {

    int a = 20;
    int b = 2;
    
    char** test = malloc(sizeof(char*) * 20);
    test [0] = "1157721013693";
    test [1] = "9101313246997";
    test [2] = "1115141139114114";
    test [3] = "813813131257511";
    test [4] = "13912313127583";
    test [5] = "579510341098";
    test [6] = "61313134141384";
    test [7] = "13151311118681112";
    test [8] = "1527841521585";
    test [9] = "1013121411131010";
    test [10] = "15126212133121212";
    test [11] = "445124148969";
    test [12] = "21581596512141";
    test [13] = "913514112123112";
    test [14] = "810511710281410";
    test [15] = "101131515537";
    test [16] = "51081041131371";
    test [17] = "2119221051462";
    test [18] = "3151111081361";
    test [19] = "42655131471211";

    printf("\nFirst Init\n");
    for(int i = 0; i < 20; ++i) {
        printf("%s\n", test[i]);
    }

    heapSort(test, 20);

    printf("\nNOW SORTED\n");
    for(int i = 0; i < 20; ++i) {
        printf("%s\n", test[i]);
    }

    return 0;
}