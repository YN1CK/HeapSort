#ifndef UNITTESTS_H
#define UNITTESTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

#include "heap.h"
#include "stringops.h"

// testSort for the string implementation
// cases = amount of tests
// returns the amount of successful tests
int testSort(unsigned long cases);

// get time in milliseconds
// returns timestamp in milliseconds
long long timeInMilliseconds(void);

// test the speed of heapSort with random variables and stores results
void testSpeed(unsigned long size);

#endif//UNITTESTS_H