#include <stdio.h>
int main()
{
    int i, sum = 0;
    float avg, n;
    scanf("%f", &n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    avg = sum / n;

    printf("Sum : %d\t Average : %f\n", sum, avg);
    return 0;
}