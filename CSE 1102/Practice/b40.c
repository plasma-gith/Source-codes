#include <stdio.h>
int main()
{
    int s, e, sum = 0;
    scanf("%d%d", &s, &e);

    for (int i = s; i <= e; i++)
    {
        if (i % 2 == 0 && i % 5 != 0 && i % 3 == 0)
        {
            sum = sum + i;
        }h
    }
    printf("%d", sum);

    return 0;
}
