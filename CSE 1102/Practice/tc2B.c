#include <stdio.h>
int main()
{
    int t, a, b, c, d, ap, bp;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        ap = a - c;
        bp = b - d;
        if (ap < bp)
            printf("First\n");
        else if (ap > bp)
            printf("Second\n");
        else
            printf("Any\n");
    }
    return 0;
}
