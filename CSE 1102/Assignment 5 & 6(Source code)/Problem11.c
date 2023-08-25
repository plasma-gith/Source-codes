//Write a program in C to store n elements in an array and print the elements using pointer. (using call by value option)
#include <stdio.h>
void display(int *a, int n);
void main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter an array of size %d: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    display(a, n);
}
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", *(a+i));
}