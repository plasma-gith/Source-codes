#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        printf("The year is a leap year!\n");
    }
    else
    {
        printf("The year is not a  leap year!\n");
    }
    return 0;
}