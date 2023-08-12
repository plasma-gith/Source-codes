//WAP to check whether square root of a number is prime or not.

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    float root_n;
    scanf("%d", &n);
    root_n = sqrt(n);

    for(i = 2; i < root_n; i++)
    {
        if (fmod(root_n, i) == 0)
            break;
    }
    if (root_n == i)
        printf("Prime number!\n");
    return 0;
}
