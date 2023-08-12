#include <stdio.h>
//without extra variable
int main()
{
    float c, d;

    printf("Enter the value of C: ");
    scanf("%f", &c);
    printf("Enter the value of D: ");
    scanf("%f", &d);

    printf("Before interchanging:\nC = %f\nD = %f\n", c, d);

    c = c + d;
    d = c - d;
    c = c - d;

    printf("After interchanging:\nC = %f\nD = %f\n", c, d);
    return 0;
}
