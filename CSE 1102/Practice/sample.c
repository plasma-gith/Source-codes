#include <stdio.h>
int series(int, int);
int main()
{
    int i = 25;
    int n = 10;
    series(i, n);
}
int series(int i, int n)
{
    if (n != 0)
    {
        int j;
        j = (i * 1468) % 467;
        printf("%d\t", j);
        series(j, n - 1);
    }
    else
        return 0;
}