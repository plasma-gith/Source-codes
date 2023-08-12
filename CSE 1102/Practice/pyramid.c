#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
        for (int k = 1; k <= 2 * i - 1; k++)
            {
                if (k % 2 != 0)
                    printf("%d", i);
                if (k % 2 == 0)
                    printf(" ");
            }

        printf("\n");
        i++;
    }
}
