#include <stdio.h>

int main()
{
    int n, product;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        product = 1;
        product = n * i;
        printf("%d * %d = %d\n", n, i, product);
    }
    return 0;
}
