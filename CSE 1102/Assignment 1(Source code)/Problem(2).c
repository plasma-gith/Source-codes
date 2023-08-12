#include<stdio.h>
int main()
{
    int x;
    printf("Enter an Integer:");
    scanf("%d", &x);

    printf("Integer: %d\n", x);

    float f;
    printf("Enter a floating-point number:");
    scanf("%f", &f);

    printf("Float: %f\n", f);

    double d;
    printf("Enter a double:");
    scanf("%lf", &d);

    printf("Double: %lf\n", d);

    char c;
    printf("Enter a character:");
    getchar();
    scanf("%c", &c);

    printf("Character: %c\n", c);

    return 0;

}
