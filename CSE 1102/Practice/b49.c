#include <stdio.h>

void d2b(int x);
int b2d(int x);
void o2b(int x);

void main()
{
    int x, y, z, p, q;
    while(1)
    {
        printf("Input a decimal number: ");
        scanf("%d", &x);
        printf("Binary: ");
        d2b(x);
        printf("\n");

        printf("Octal: %o\n", x);

        printf("Hexadecimal: %x\n", x);;

        printf("Input a binary number: ");
        scanf("%d", &y);
        printf("Decimal: %d", b2d(y));
        printf("\n");

        printf("Input a octal number: ");
        scanf("%o", &z);
        printf("Decimal: %d\n", z);

        printf("Input a hexadecimal number: ");
        scanf("%x", &z);
        printf("Decimal: %d\n", z);

        printf("Input a octal number: ");
        scanf("%o", &p);
        printf("Binary: ");
        o2b(p);
        printf("\n");

        printf("Input a hexadecimal number: ");
        scanf("%x", &q);
        printf("Binary: ");
        d2b(q);
        printf("\n");
    }
}

void d2b(int x)
{
    if (x != 0)
    {
        d2b(x / 2);
        printf("%d", x % 2);
    }
}

int b2d(int x)
{
    if (x == 0)
        return 0;
    else
        return x % 10 + 2 * b2d(x / 10);
}

void o2b(int x)
{
    if (x != 0)
    {
        o2b(x / 2);
        printf("%d", x % 2);
    }
}
