#include <stdio.h>
int main()
{
    int a, b;
    char dot;
    scanf("%d", &a);
    scanf("%c", &dot);
    if (dot == '.')
        return 0;
    for(;;)
    {
        scanf("%d", &b);
        scanf("%c", &dot);
        if (dot == '.')
            break;
        if (a < b)
            printf("%d is less than %d!\n", a, b);
        else if (a > b)
            printf("%d is greater than %d!\n", a, b);
        else
            printf("%d is equal to %d!\n", a, b);
        a = b;
    }
    printf("Exited by (.)\n");
    return 0;
}
