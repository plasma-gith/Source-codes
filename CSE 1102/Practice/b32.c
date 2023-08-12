#include <stdio.h>
int main()
{
    int s, e;
    float avg, sum = 0, count = 0;
    scanf("%d%d", &s, &e);
    for (int i = s; i <= e; i++)
    {
        sum = sum + i;
        count = count + 1;
    }
    avg = sum / count;

    printf("%f\n", avg);

    return 0;
}
