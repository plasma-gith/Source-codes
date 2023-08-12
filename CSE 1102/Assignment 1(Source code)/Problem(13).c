#include <stdio.h>
int main()
{
    int x, a = 0, n = 0;
    printf("Enter a 5 digit number: ");
    scanf("%d", &x);

    n = x;

    for(int i = 0; i < 5; i++)
    {
        a = (a * 10) + (x % 10);
        x = x / 10;

    }
    printf("Reversed number: %05d\n", a);

    if(a == n)
    {
        printf("The numbers are equal!\n");
    }
    else
    {
        printf("The numbers are not equal!\n");
    }
}