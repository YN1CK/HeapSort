#ifndef UNITTESTS_H
#define UNITTESTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

#include "heap.h"
#include "stringops.h"

int _testSort(int cases);

int testSort(unsigned long cases);

long long timeInMilliseconds(void);

void testSpeed(unsigned long size);

#endif//UNITTESTS_H