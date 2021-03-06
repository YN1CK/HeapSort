#include "heap.h"


// final functions
void swap(char** a, char** b) {
    char* temp;
    temp = *a;
    *a = *b;
    *b  = temp;
}

void heapify(char** array, int rootIndex, int length) {
    int newRoot;
    int childLeft;
    int childRight;

    // current root as new root
    // index of left child
    // index of right child
    newRoot = rootIndex;
    childLeft = 2 * rootIndex + 1;
    childRight = 2 * rootIndex + 2;

    // check if child is in array and if it's larger than newRoot
    if (childLeft < length) {
        if (strcasecmp(array[childLeft], array[newRoot]) >= 0) {
            newRoot = childLeft;
        }
    }
    
    // check if other child is also in array and if its larger than newRoot
    if (childRight < length) { 
        if(strcasecmp(array[childRight], array[newRoot]) >= 0) {
            newRoot = childRight;
        }
    }

    // swap if newRoot has changed and continue heapifying with newRoot
    if (newRoot != rootIndex) {
        swap(&array[rootIndex], &array[newRoot]);
        heapify(array, newRoot, length);
    }
}

void heapSort(char** array, int length) {
        
    // building the heap bottom to top
    for (int i = length / 2 - 1; i >= 0; --i) {
        heapify(array, i, length);
    }

    // heap sort
    for (int i = length - 1; i > 0; --i) {
        swap(&array[0], &array[i]);
        heapify(array, 0, i);
    }
}
