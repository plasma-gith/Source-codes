#include <stdio.h>
long long int fact(long long int n);
int main()
{
    long long int x;
    scanf("%llu", &x);
    printf("%llu", fact(x));
    return 0;
}
long long int fact(long long int n)
{
    long long int fact = 1;
    for (long long int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
