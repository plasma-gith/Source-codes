#include <stdio.h>
void count (int x);
void main()
{
    int n;
    scanf("%d", &n);
    count(n);

}
void count (int x)
{
    static int i;
    scanf("%d", &i);
    if (x >= i)
    {
        printf("%d\t", x);
        count(x - 1);
    }
}
