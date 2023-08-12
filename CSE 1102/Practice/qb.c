#include <stdio.h>
void display(int *);
void main()
{
    int p[] = {2,4,5,7,8,8,5,6,4};
    display (p);
    printf("Final values in array : \n");
    for(int i = 0; i < 9; i++)
    {
        printf("%d\t", p[i]);
    }
    printf("\nFrom main p = %d", p);
}
void display (int *p)
{
    int *x, *y, *z, a;
    x = p;
    y = p + 4;
    z = p + *p;
    z++;

    a = ((*z)++) * 2 - ((*x)/(*y));
    *x = *x + -8;
    printf("%d %d %d\n", *x, *y, a);
    p = p + 8;
    *p = a;
}