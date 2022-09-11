#include <stdio.h>
#include "map.template.c.h"

// instanciating Map(int)
MapDeclarePrototypes(int);
MapDefine(int, "%d");

// instanciating Map(double)
MapDeclarePrototypes(double);
MapDefine(double, "%lf");

int main()
{
    Map(double) m = MapFunc(double, newmap);
    MapFunc(double, set, m, 18388, 388.88);
    MapFunc(double, set, m, 4788, 26.90);
    MapFunc(double, print, m);
    MapFunc(double, free, &m);
    Map(int) m2 = MapFunc(int, newmap);
    MapFunc(int, set, m2, 2, 12);
    MapFunc(int, set, m2, 5, 46);
    MapFunc(int, print, m2);
    MapFunc(int, free, &m2);
    return 0;
}
