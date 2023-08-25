//Write a program in C to show the basic declaration of pointer
#include <stdio.h>
void main()
{
    int a, *x, **y;
    a = 5;
    x = &a;
    y = &x;

    printf("%d %d %d", a, *x, **y);
}