#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers:\n");
    scanf("%f%f", &a, &b );

    if (a > b)
    {
        printf("Maximum value: %f\nMinimum value: %f\n", a, b);
    }
    else if (a < b)
    {
        printf("Maximum value: %f\nMinimum value: %f\n", b, a);
    }
    else
    {
        printf("Both are equal\n");
    }

    return 0;
}