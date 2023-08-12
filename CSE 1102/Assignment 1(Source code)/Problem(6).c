#include <stdio.h>
int main()
{
    int x, a, b, c, d, e, sum;
    printf("Enter a five digit number: ");
    scanf("%d", &x);

    if (x > -100000 && x < 100000)
    {
        a = x % 10;
        x = x / 10;
        b = x % 10;
        x = x / 10;
        c = x % 10;
        x = x / 10;
        d = x % 10;
        x = x / 10;
        e = x % 10;

        sum = a + b + c + d + e;
        printf("Sum of the digits: %d\n", sum);
    }
    else
    {
        printf("Please enter a five digit number!\n");
    }

    return 0;
}