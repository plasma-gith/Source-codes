/* Write a program to print out all Armstrong numbers between 1 and 10000.
If sum of cubes of each digit of the number is equal to the number itself,
then  the number is called an Armstrong number.
For example, 153 = (1*1*1) +  (5*5*5) + (3*3*3)*/
#include <stdio.h>
#include <math.h>

int main()
{
    int digit, a, power, ni, nsum, n;

    for (n = 1; n <= 10000; n++)
    {
        ni = n;
        nsum = 0;
        digit = log10(n) + 1;

        while (ni != 0)
        {
            a = ni % 10;
            power = pow(a, digit);
            nsum += power;
            ni /= 10;
        }

        if (nsum == n)
        {
            printf("%d\t", nsum);
        }
    }

    return 0;
}
