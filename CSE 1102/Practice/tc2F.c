#include <stdio.h>

int main()
{
    int t,n;
    float p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        p = n * 50.0 -(2* n * 50 * 0.2)-(n * 50 * 0.3);
        printf("%.0f\n", p);
    }
    return 0;
}
