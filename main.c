#include <stdio.h>
#include <math.h>

#include "map.template.c.h"

// instanciating Map(int)
MapDeclarePrototypes(int);
MapDefine(int, "%d");

// instanciating Map(double)
MapDeclarePrototypes(double);
MapDefine(double, "%.03lf");

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

// tests MapFunc(vtype, hashString, str) function
void testHasher()
{
    int i;
    char str[33] = {0};
    for (i = 0; i < 100; i++) {
        mkRandomStr(str);
        printf("%lu: %s\n", MapFunc(int, hashString, str), str);
    }
}

int main()
{
    // double map test
    Map(double) m = MapFunc(double, newmap);
    MapFunc(double, set, m, MapFunc(double, hashString, "key1"), 388.88);
    MapFunc(double, set, m, MapFunc(double, hashString, "key2"), 26.90);
    printf("double map = "); MapFunc(double, print, m);
    MapFunc(double, free, &m);
    // int map test
    Map(int) m2 = MapFunc(int, newmap);
    MapFunc(int, set, m2, MapFunc(int, hashString, "key1"), 12);
    MapFunc(int, set, m2, MapFunc(int, hashString, "key2"), 46);
    printf("int map = "); MapFunc(int, print, m2);
    MapFunc(int, free, &m2);
    // hash function test
    #if TEST_HASHER
    testHasher();
    #endif
    return 0;
}
