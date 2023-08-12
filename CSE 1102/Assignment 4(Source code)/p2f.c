#include <stdio.h>
#include <stdlib.h>
double powr(float x, int y);
int main()
{
    float a;
    int b;
    scanf("%f%d", &a, &b);
    printf("%lf", powr(a,b));
    return 0;
}
double powr(float x, int y)
{   
    if (y == 0)
        return 1;
    int i = 1;
    double product = 1;
    while(i <= abs(y))
    {
        product = x * product;
        i++;
    }
    if(y < 0)
        return 1 / product;
    else
        return product;
}