// Write a program to swap two numbers using call by reference
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap (&a, &b);
    printf("a = %d\tb = %d", a, b);
}