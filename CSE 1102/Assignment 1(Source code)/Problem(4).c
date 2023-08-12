#include <stdio.h>
#include <math.h>

int main()
{
    //power

    double base, ex, result;
    printf("Enter the base and exponent:\n");
    scanf("%lf%lf", &base, &ex);
    result = pow(base, ex);

    printf("The result of %lf raised to the power of %lf is %lf\n", base, ex, result);

    //square root

    double x, square_root;
    printf("Enter the number:\n");
    scanf("%lf", &x);
    square_root = sqrt(x);

    printf("Square root of x: %lf\n", square_root);

    //logarithmic

    double y, logN;
    printf("Enter the number:\n");
    scanf("%lf", &y);
    logN = log(y);

    printf("Natural log of %lf is %lf\n", y, logN);

    //trigonometric

    float a, sine, cosine, tangent;
    printf("Enter angle:\n");
    scanf("%f", &a);

    float radians = a * (3.1416 / 180.0);

    sine = sin(radians);
    cosine = cos(radians);
    tangent = tan(radians);

    printf("Sin(%f) = %f\nCos(%f) = %f\nTan(%f) = %f\n", a, sine, a, cosine, a, tangent);


    return 0;
}