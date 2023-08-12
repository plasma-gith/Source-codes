#include <stdio.h>

// Function to generate the series using the formula (previous * 1468) % 1467
void series(int initial_value, int *result)
{
    result[0] = initial_value;

    for (int i = 1; i < 10; i++)
    { // Generate the next 9 numbers in the series
        result[i] = (result[i - 1] * 1468) % 467;
    }
}

int main()
{
    int series_result[10];
    series(25, series_result);
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", series_result[j]);
    }
    printf("\n");

    return 0;
}
