#include <stdio.h>
int main()
{
    int i, n, product;
    scanf("%d", &n);
    for(i = 1; i <= 10; i++)
    {
        product = n * i;
        printf ("%d * %d = %d\n", n, i, product);
    }
    return 0;
}