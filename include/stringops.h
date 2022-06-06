#ifndef STRINGOPS_H
#define STRINGOPS_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


// generates a c-string by counting to x with letters
// n = length of the string
// x = seed/target
// returns pointer to generated string
char* generateLinearString(int n, unsigned long x);

// generates pseudo-random lowercase c-string
// length = length of the string
// returns pointer to generated string
char* generateRandomString(int length);

#endif//STRINGOPS_H