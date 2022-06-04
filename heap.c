#include "heap.h"

void _swap(int* a, int* b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
