#include <stdio.h>
#include <stdlib.h>
double powr(float x, int y);
int main()
{
    float a;
    int b;
    scanf("%f%d", &a, &b);
    printf("%lf", powr(a, b));
    return 0;
}
double powr(float x, int y)
{
    if (y == 0)
        return 1;
    else if (y < 0)
        return 1 / powr(x, -y);
    else
        return x * powr(x, y - 1);
}
