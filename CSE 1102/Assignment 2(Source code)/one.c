#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
            printf("%d\t", i);
    }
    printf("\n");

    return 0;
}