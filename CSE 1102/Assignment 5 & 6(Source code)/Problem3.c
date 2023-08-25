//Write a program to find a matrix is identity matrix or not
#include <stdio.h>
int main()
{
    int row, col, count = 0, countZero = 0;
    printf("Enter the size of a matrix: \n");
    scanf("%d%d", &row, &col);
    int a[row][col];
    printf("Enter the matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j && a[i][j] == 1)
            {
                count++;
            }
            else if (i != j && a[i][j] == 0)
            {
                countZero++;
            }
        }
    }
    if (count == row && countZero == (row * col - count))
        printf("Identity matrix\n");
    else
        printf("No\n");
    
    return 0;
}