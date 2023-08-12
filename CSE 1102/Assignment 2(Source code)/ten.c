#include <stdio.h>
int main()
{
    int n, m = 0, a = 0;
    scanf("%d", &n);

    for (;n != 0;)
    {
        m = (m * 10) + (n % 10);
        n = n / 10;
    }
    for (;m != 0;)
    {
        a = (a * 10) + (m % 10);
        m = m / 10;
        printf("%d   ", a);
    }

    return 0;
}