#include <stdio.h>
#include <math.h>

#include "tlib/bst-map.template.c.h"

// instanciating BstMap(int)
BstMapDeclarePrototypes(int);
BstMapDefine(int, printf("%d", value));

// instanciating BstMap(double)
BstMapDeclarePrototypes(double);
BstMapDefine(double, printf("%.03lf", value));

#define TEST_HASHER 0

// generates a random 32 B alphanumeric string
void mkRandomStr(char str[33])
{
    char a;
    size_t i = 0;
    #define mkRandom_len (26 +26 +10)
    char charr[mkRandom_len +1] = {0};
    for (a = 'A'; a <= 'Z' && i < mkRandom_len; a++, i++)
        charr[i] = a;
    for (a = '0'; a <= '9' && i < mkRandom_len; a++, i++)
        charr[i] = a;
    for (a = 'a'; a <= 'z' && i < mkRandom_len; a++, i++)
        charr[i] = a;
    for (i = 0; i < 32; i++) {
        size_t r = (size_t) (rand() % mkRandom_len);
        str[i] = charr[r];
    }
}

// tests BstMapFunc(vtype, hashString, str) function
void testHasher()
{
    int i;
    char str[33] = {0};
    for (i = 0; i < 100; i++) {
        mkRandomStr(str);
        printf("%lu: %s\n", BstMapFunc(int, hashString, str), str);
    }
}

int main()
{
    // double map test
    BstMap(double) m = BstMapFunc(double, newmap);
    BstMapFunc(double, set, m, BstMapFunc(double, hashString, "key1"), 388.88);
    BstMapFunc(double, set, m, BstMapFunc(double, hashString, "key2"), 26.90);
    printf("double map = "); BstMapFunc(double, print, m);
    BstMapFunc(double, free, &m);
    // int map test
    BstMap(int) m2 = BstMapFunc(int, newmap);
    BstMapFunc(int, set, m2, BstMapFunc(int, hashString, "key1"), 12);
    BstMapFunc(int, set, m2, BstMapFunc(int, hashString, "key2"), 46);
    printf("int map = "); BstMapFunc(int, print, m2);
    BstMapFunc(int, free, &m2);
    // hash function test
    #if TEST_HASHER
    testHasher();
    #endif
    return 0;
}
