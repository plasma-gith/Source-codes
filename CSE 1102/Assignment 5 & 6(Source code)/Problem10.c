//Write a program in C to add two numbers using pointers
#include <stdio.h>
void summ(int a, int b, int *sum)
{
    *sum = a + b;
}
void main()
{
    int a, b, sum;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &a, &b);
    summ(a, b, &sum);
    printf("Sum = %d\n", sum);
}