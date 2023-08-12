#include <stdio.h>
int main()
{
    int a, b, i, sum = 0;
    scanf("%d%d", &a, &b);
    for(i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            if (i % 3 == 0 && i % 5 != 0)
            {
                sum = sum + i;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}