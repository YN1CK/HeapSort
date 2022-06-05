#include "stringops.h"


char* generateLinearString(int n, int base) {
    const char* literals = "abcdefghijklmnopqrstuvwxyz";
    char* tmp = malloc(sizeof(char) * n);
    int reset = 0;
    for (int i = 0; i < n-1; ++i) {
        while (base + i - reset > 26) {
            reset += 26;
        }
        *(tmp + sizeof(char) * i) = literals[base+i-reset];
    }
    tmp[n-1] = '\0';
    return tmp;
}

char* generateRandomString(int length) {

    // allocate data
    char* temp;
    temp = malloc(sizeof(char) * length + 1);


    // fill with random Values
    char number = '0';
    char lower = 'a';
    char upper = 'A';
    int type = 6;

    for (int i = 0; i < length; ++i) {
        srand(time(NULL) + (int)(2 * type) - number);
        type = (rand() % 3) + 1;

        // number
        if (type == 1) {
            temp[i] = number;
            ++number;
        }

        // lower
        if (type == 2) {
            temp[i] = lower;
            ++lower;
        }

        // upper 
        if (type == 3) {
            temp[i] = upper;
            ++upper;
        }
    }
    temp[length] = '\0';

    return temp;
}