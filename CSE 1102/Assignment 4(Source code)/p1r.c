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
    if(n > 1)
        return n*fact(n-1);
    else
        return 1;
}