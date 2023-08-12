#include <stdio.h>
#include <string.h>

void main()
{
    char a[100], b[100], c[100];

    gets(a);
    gets(b);

    int len = strlen(b);

    for (int i = len - 5; i < len; i++)
    {
        c[i - (len - 5)] = b[i];
    }

    strcat(a, c);

    printf("%s", a);
}
