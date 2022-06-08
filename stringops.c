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

    printf("%s\n", tmp);

    return tmp;
}

char* generateRandomString(int length) {

    // allocate data
    char* temp;
    temp = malloc(sizeof(char) * (length + 1));
    const char* base = "abcdefghijklmnopqrstuvwxyz";


 
    for (int i = 0; i <= length; ++i) {
        srand(time(NULL) * rand() + rand() % 15);
        temp[i] = base[rand() % 26];
        }
    temp[length] = '\0';

    return temp;
}