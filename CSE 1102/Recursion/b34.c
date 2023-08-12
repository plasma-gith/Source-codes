#include <stdio.h>

void even(int n);

void main()
{
    int s = 2;
    even(s);
}

void even(int n)
{
    if (n <= 50)
    {
        printf("%d\t", n);
        even(n + 2);
    }
}
