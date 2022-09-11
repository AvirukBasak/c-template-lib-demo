#include <stdio.h>
#include "map.template.c.h"

DefineMap(double, "%lf");

int main()
{
    Map(double) m = MapFunc(double, newmap);
    MapFunc(double, set, m, 18388, 388.88);
    MapFunc(double, set, m, 4788, 26.90);
    MapFunc(double, print, m);
    MapFunc(double, free, &m);
    return 0;
}
