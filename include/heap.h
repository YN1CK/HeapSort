#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>

// prototype functions (starting with an underscore)
void _swap(int* a, int *b);
void _heapify(int* array, int rootIndex, int length);
void _heapSort(int* array, int length);

// final functions
void swap(char** a, char** b);
void heapify(char** array, int rootIndex, int length);
void heapSort(char** array, int length);
int isGreater(char* leftString, char* rightString);

#endif//HEAP_H