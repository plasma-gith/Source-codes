#include <stdio.h>
int dlt(int a[], int element, int *size); // this function takes the element and deletes it
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
    for (int i = 0; i < *size;)
    {
        if (a[i] == element)
        {
            for (int j = i; j < *size - 1; j++)
            {
                a[j] = a[j + 1];
            }
            *size = *size - 1;
        }
        else
            i++;
    }    
    return *size;
}