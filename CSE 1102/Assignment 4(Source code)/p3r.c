#include <stdio.h>
int lcm(int x, int y);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a >= b)
        printf("%d", lcm(b, a));
    else
        printf("%d", lcm(a, b));
    return 0;
}
int lcm(int x, int y)
{
    static int max = 0;
    max = max + y;

    if ((max % x == 0) && (max % y == 0))
        return max;
    else
        lcm(x, y);
}