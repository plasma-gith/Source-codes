#include <stdio.h>

void even(int n);

void main()
{
    int s = 1;
    even(s);
}

void even(int n)
{
    if (n <= 49)
    {
        printf("%d\t", n);
        even(n + 2);
    }
}
