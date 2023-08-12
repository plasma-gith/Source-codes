#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("The number is an even number\n");
    }
    else if (x % 2 == 1)
    {
        printf("The number is an odd number\n");
    }
    else
    {
        printf("Please insert a valid input\n");
    }

    return 0;
}