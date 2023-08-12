// WAP to check that given number is prime or not.
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (n == i)
        printf("Prime number!\n");
    return 0;
}
