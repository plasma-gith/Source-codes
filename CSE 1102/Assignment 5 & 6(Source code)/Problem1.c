//1d array sorting (Bubble sort)

#include <stdio.h>
void sort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a [j + 1];
                a[j + 1] = temp; 
            }
        }
    }
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[100], size;
    printf("Enter the size of an array: \n");
    scanf("%d", &size);
    printf("Enter an array: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    sort(a, size);
    return 0;
}
