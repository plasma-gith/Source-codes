#include <stdio.h>
void alg(int n);
int main()
{
    int n;
    scanf("%d", &n);
    alg(n);
    return 0;
}
void alg(int n)
{
    printf("%d ", n);
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        printf("%d ", n);
    }
    printf("\n");
}
