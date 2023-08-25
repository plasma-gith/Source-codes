//Write a program in C to find the largest element from a list using pointer
#include <stdio.h>
int findmax(int *ptr, int n)
{
    int max = *ptr;
    for(int i = 1; i < n; i++)
    {
        if (*(ptr+i) > max)
            max = *(ptr+ i);
    }
    return max;
}
void main()
{
    int n, *ptr;
    scanf("%d", &n);
    int a[n];
    printf("Enter an array of size %d: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    ptr = a;
    int largest = findmax (ptr, n);
    printf("The largest element is %d\n", largest);
}