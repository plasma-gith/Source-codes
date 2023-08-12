#include <stdio.h>
int sum(int s, int e)
{
    if (s == e)
        return s;
    else
    {
        return s + sum((s+1), e);
    }
}
float avg(int sum, int count)
{
    return (float)sum / count;
}
int main()
{
    int n, m, summ, count;
    scanf("%d%d", &n, &m);
    summ = sum(n, m);
    count = m - n + 1;
    float avgg = avg(summ, count);
    printf("Sum = %d\nAverage = %f\n", summ, avgg);
    return 0;
}
