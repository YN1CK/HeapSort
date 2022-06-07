#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>
#include <string.h>

// prototype functions (starting with an underscore)

// swapping two pointer to integers in an array
// a = pointer to first integer
// b = pointer to second integer
void _swap(int* a, int *b);

// sorts heap with given root and it's children
// array = pointer to unsorted array
// rootIndex = index of the root element
// length = length of the array
void _heapify(int* array, int rootIndex, int length);

// sorts the given integer array
// array = array to sort
// length = length of array to sort
void _heapSort(int* array, int length);

// final functions

// swapping two pointer to cstrings in an array
// a = pointer to first cstring
// b = pointer to second cstring
void swap(char** a, char** b);

// sorts heap with given root and it's children
// array = pointer to unsorted array
// rootIndex = index of the root element
// length = length of array
void heapify(char** array, int rootIndex, int length);

// sorts the given cstring array
// array = array to sort
// length = length of array
void heapSort(char** array, int length);

#endif//HEAP_H