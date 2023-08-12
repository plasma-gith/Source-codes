#include <stdio.h>
int main()
{
    float l, b, r, ar, p, ac, c;

    printf("Input the length of the rectangle: ");
    scanf("%f", &l);
    printf("Input the height  of the rectangle: ");
    scanf("%f", &b);
    printf("Input the radius of the circle: ");
    scanf("%f", &r);

    if (l >= 0 && b >= 0 && r >= 0)
    {
        ar = l * b;
        p = 2.0 * (l + b);
        ac = 3.1416 * r * r;
        c = 2 * 3.1416 * r;

        printf("Area of the rectangle = %f\nPerimeter of the rectangle = %f\nArea of the circle = %f\nCircumference of the circle = %f\n", ar, p, ac, c);
    }
    else
    {
        printf("Please insert a valid input\n");
    }

    return 0;
}