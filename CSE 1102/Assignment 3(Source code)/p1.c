/*Write a program to find first n Fibonacci number where n is the input from  user*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 1;
    for(i = 1 ; i<=n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("Fibonacci number = %d", sum);
    return 0;
}
