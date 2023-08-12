#include <stdio.h>
void zero_small(int *a, int *b);
int main()
{
    int a, b, *x, *y;
    scanf("%d%d", &a, &b);
    zero_small(&a,&b);
    printf("a = %d\t b = %d\n", a, b);
}
void zero_small(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}