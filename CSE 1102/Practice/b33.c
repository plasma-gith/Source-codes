#include <stdio.h>
int main()
{
    int s, e;
    float avg, sum = 0, count = 0;
    scanf("%d%d", &s, &e);
    for (int i = s + 1; i < e; i++)
    {
        printf("%d\t", i);
    }

    return 0;
}
