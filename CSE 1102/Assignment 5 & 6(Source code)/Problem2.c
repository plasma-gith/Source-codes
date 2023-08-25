//Write a program to sum two matrixes

#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of rows and colums: \n");
    scanf("%d%d", &row, &col);
    int a[row][col], b[row][col];
    printf("Enter the matrix A: \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the matrix B: \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &b[i][j]);
    printf("Sum of the matrices: \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            b[i][j] = a[i][j] + b[i][j];
        }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}