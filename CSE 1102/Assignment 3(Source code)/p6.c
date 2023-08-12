/*WAP to determine all Pythagorean triplets in the range 100 to 1000. (A
Pythagorean triplet is a set of three integers i, j, k such that i2 + j2 = k2 )*/
#include <stdio.h>

void find_pythagorean_triplets(int initial, int finall)
{
    for (int i = initial; i <= finall; i++)
    {
        for (int j = i; j <= finall; j++)
        {
            for (int k = j; k <= finall; k++)
            {
                if (i * i + j * j == k * k)
                {
                    printf("%d, %d, %d\n", i, j, k);
                }
            }
        }
    }
}

int main()
{
    int i = 100;
    int f = 1000;

    find_pythagorean_triplets(i, f);

    return 0;
}
