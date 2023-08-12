#include <stdio.h>
int main()
{
    int t, x;
    scanf("%d", &t);
    if (t >= 0 && t <= 100)
    {
        for(int i = 1; i <= t; i++)
        {
            scanf("%d", &x);
            if (x >= 0 && x <= 100)
            {
                if (x <= 15)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
    }
    return 0;
}
