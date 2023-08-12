#include <stdio.h>
int main()
{
    int n;
    float avg, sum = 0, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum = sum + i;
        count = count + 1;
    }
    avg = sum / count;

    printf("Sum = %f\nAverage = %f\n",sum, avg);

    return 0;
}

