/*11.WAP to print the factorial of all the numbers till the given number.*/

#include <stdio.h>
unsigned long long factorial(int num)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorials of numbers up to %d:\n", num);
    for (int i = 1; i <= num; i++)
    {
        unsigned long long fact = factorial(i);
        printf("%d! = %llu\n", i, fact);
    }

    return 0;
}
