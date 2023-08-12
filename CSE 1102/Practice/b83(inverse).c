#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    int n, i, j;
    scanf("%s", name);
    n = strlen(name);

    for (i = n; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}
