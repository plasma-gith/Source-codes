#include <stdio.h>
int main()
{
    int n = 0, m = 0;
    if (n != '.')
    {
        for (;;)
        {
            scanf("%d", &n);
            if (m < n)
                printf("Greater!\n");
            else if (m > n)
                printf("Lesser!\n");
            else if (m == n)
                printf("Equal!\n");
            m = n;
        }
    }

    return 0;
}