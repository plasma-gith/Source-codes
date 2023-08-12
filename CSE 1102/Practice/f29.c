#include <stdio.h>
int dlt(int a[], int element, int *size); //this function takes the index number and deletes it
int main()
{
    int n, element;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nInput array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nElement to delete: ");
    scanf("%d", &element);

    dlt(a, element, &n);

    printf("Final array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
int dlt(int a[], int element, int *size)
{
    int temp = *size - 1;
    for (int i = element - 1; i < temp; i++)
    {
        a[i] = a[i + 1];
    }
    return *size = *size - 1;
}