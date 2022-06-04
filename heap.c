#include "heap.h"


// prototype functions
void _swap(int* a, int* b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void _heapify(int* array, int rootIndex, int length) {
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
    if ((childLeft < length) && (array[childLeft] > array[newRoot])) {
        newRoot = childLeft;
    }
    
    // check if other child is also in array and if its larger than newRoot
    if ((childRight < length) && (array[childRight] > array[newRoot])) {
        newRoot = childRight;
    }

    // swap if newRoot has changed and continue heapifying with newRoot
    if (newRoot != rootIndex) {
        _swap(&array[rootIndex], &array[newRoot]);
        _heapify(array, newRoot, length);
    }
}

void _heapSort(int* array, int length) {
    
    // building the heap bottom to top
    for (int i = length / 2 - 1; i >= 0; --i) {
        _heapify(array, i, length);
    }

    // heap sort
    for (int i = length - 1; i >= 0; --i) {
        _swap(&array[0], &array[i]);
        _heapify(array, 0, i);
    }
}


// final functions
void swap(char** a, char** b) {
    char** temp;
    temp = a;
    a = b;
    b  =temp;
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
    if ((childLeft < length) && leftIsGreater(array[childLeft], array[newRoot])) {
        newRoot = childLeft;
    }
    
    // check if other child is also in array and if its larger than newRoot
    if ((childRight < length) && leftIsGreater(array[childRight], array[newRoot])) {
        newRoot = childRight;
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

int leftIsGreater(char* leftString, char* rightString) {
    int index = 0;
    while (leftString[index] || rightString[index]) {
        if (leftString[index] > rightString[index]) {
            return 1;
        }
        if (!leftString[index]) {
            break;
        }
        ++index;
    }
    return 0;
}