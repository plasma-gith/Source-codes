// Write a program in C to demonstrate the use of &(address of) and *(value at address) operator
#include <stdio.h>
void main()
{
    int a;
    a = 5;

    printf("%p %d", &a, *(&a));
}