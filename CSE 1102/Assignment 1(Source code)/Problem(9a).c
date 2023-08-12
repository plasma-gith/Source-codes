#include <stdio.h>
//using extra variable
int main()
{
    float c, d, temp;

    printf("Enter the value of C: ");
    scanf("%f", &c);
    printf("Enter the value of D: ");
    scanf("%f", &d);

    printf("Before interchanging:\nC = %f\nD = %f\n", c, d);

    temp = c;
    c = d;
    d = temp;

    printf("After interchanging:\nC = %f\nD = %f\n", c, d);
    return 0;
}
