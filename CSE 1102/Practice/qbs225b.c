#include <stdio.h>
void sort(int a[], int size);
void uni(int a[], int n, int b[], int m);
void inter(int a[], int n, int b[], int m);
void main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++) // input of array a
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) // input of array b
        scanf("%d", &b[i]);
    sort(a, n);
    sort(b, m);
    printf("\nUnion:\n");
    uni(a,n,b,m);
    printf("\nIntersection:\n");
    inter(a,n,b,m);

}
void sort(int a[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}
void uni(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            printf("%d ", a[i]);
            i++;
        }
        else if (b[j] < a[i])
        {
            printf("%d ", b[j]);
            j++;
        }
        else
        {
            printf("%d ", b[j]);
            i++;
            j++;
        }
        while (i < n)
        {
            printf("%d ", a[i]);
            i++;
        }
        while (j < m)
        {
            printf("%d ", b[j]);
            j++;
        }
    }
}
void inter(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            printf("%d ", a[i]);
            i++;
        }
        else if (b[j] < a[i])
        {
            printf("%d ", b[j]);
            j++;
        }
        else
        {
            printf("%d ", b[j]);
            i++;
            j++;
        }
    }
}