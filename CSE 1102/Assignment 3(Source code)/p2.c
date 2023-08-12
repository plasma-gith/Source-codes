/*2. Write a program to calculate how many 5 digit numbers can be created if the
following terms apply :

i. the leftmost digit is even
ii. the second digit is odd
iii. the third digit is a non-even prime
iv. the fourth and fifth are two random digits not used before in
the number.*/

#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int count = 0;

    for (int a = 2; a <= 8; a += 2)
    {
        for (int b = 1; b <= 9; b += 2)
        {
            for (int c = 2; c <= 9; c++)
            {
                if (isPrime(c))
                {
                    for (int d = 0; d <= 9; d++)
                    {
                        for (int e = 0; e <= 9; e++)
                        {
                            if (d != a && e != a && d != b && e != b && d != c && e != c)
                            {
                                count++;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("Total numbers: %d\n", count);

    return 0;
}

