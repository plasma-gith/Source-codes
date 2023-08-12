// Write a function that receives an array and a number as argument and returns number of occurrences of the
// number in the array
#include <stdio.h>
int freq(int a[], int size, int x);
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int x;
    printf("\nEnter a number to search:\n");
    scanf("%d", &x);
    int count = freq(a, n, x);

    printf("The number is present %d times", count);
    return 0;
}
int freq(int a[], int size, int x)
{   
    int count = 0; 
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    return count;
}