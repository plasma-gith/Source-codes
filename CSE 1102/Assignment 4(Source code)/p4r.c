#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    a = (a > 0) ? a : -a;
    b = (b > 0) ? b : -b;

    printf("%d", gcd(a, b));

    return 0;
}
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else if (y > x)
        return gcd(x, y % x);
    else
        return gcd(y, x % y);
}