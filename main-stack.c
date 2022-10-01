#include <stdio.h>
#include <math.h>

#include "tlib/stack.template.h"

// instanciating Stack(int)
StackDeclarePrototypes(int);
StackDefine(int, printf("%d", value));

// instanciating Stack(double)
StackDeclarePrototypes(double);
StackDefine(double, printf("%.03lf", value));

int main()
{
    // double stack test
    Stack(double) st = StackFunc(double, newstack);
    StackFunc(double, push, st, 388.88);
    StackFunc(double, push, st, 26.90);
    printf("double stack = "); StackFunc(double, print, st);
    StackFunc(double, free, &st);
    // int stack test
    Stack(int) st2 = StackFunc(int, newstack);
    StackFunc(int, push, st2, 12);
    StackFunc(int, push, st2, 46);
    printf("int stack = "); StackFunc(int, print, st2);
    StackFunc(int, free, &st2);
    return 0;
}
