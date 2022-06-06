#include "stringops.h"


char* generateLinearString(int n, unsigned long x) {
    char* tmp = malloc(sizeof(char) * n + 1);
    const char* base = "abcdefghijklmnopqrstuvwxyz";
    char* rtmp;

    rtmp = tmp + n;
    *rtmp = '\0';
    do {
        *--rtmp = base[x % 26];
        x /= 26;
    } while(x);
    while (rtmp != tmp) {
        *--rtmp = 'a';
    }
    return tmp;
}