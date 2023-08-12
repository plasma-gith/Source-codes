#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    int n, i, j;
    scanf("%s", name);
    n = strlen(name);

    for (i = 0; i <= n; i++) //amar question: loop ta 0 theke n porjonto ghurlo keno?
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}
