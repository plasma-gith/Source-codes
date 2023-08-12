#include <stdio.h>
int main()
{
    int row, col, i, j;
    char character;
    printf("Enter row and column number:\n");
    scanf("%d%d", &row, &col);
    printf("Enter character: ");
    getchar();
    scanf("%c", &character);

    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= col; j++)
        {
            printf("%c\t", character);
        }
        printf("\n");
    }
    return 0;
}
