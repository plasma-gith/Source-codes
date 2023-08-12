#include <stdio.h>
int main()
{
    int t, n, x, c;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &x);

        if (n > x)
        {
            c = n - x;
            if (c % 4 == 0)
                printf("%d\n", c / 4);
            else if (c % 4 != 0)
                printf("%d\n", (c / 4) + 1);
        }
        else
        {
            printf("0\n");
        }

    }
    return 0;
}
