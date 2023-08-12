#include <stdio.h>

int main()
{
    int n,z,x,a,b;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        z = a * b;
        if( z % 4==0)
        {
            printf("\n%d", z/4);
        }
        else
        {
            printf("\n%d", (int)(z/4)+1);
        }

    }
    return 0;
}

/*
#include<stdio.h>
#include <math.h>
void main()
{
    int t, n, p, x, i, j;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &x);
        p = (float) n * x / 4;
        printf("%.0f", ceil(p));
    }
}
*/
