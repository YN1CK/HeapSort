#include <stdio.h>
#include <stdlib.h>

#include "heap.h"
#include "stringops.h"
#include "unittests.h"

#define a_size 15

int main() {

    int a = 50;
    int b;
    b = _testSort(a);
    printf("%d / %d tests were successful\n", b, a);
    return 0;
}