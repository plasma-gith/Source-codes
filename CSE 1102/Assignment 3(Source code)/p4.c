/*4. Square of 12 is 144. 21, which is a reverse of 12 has a square 441, which is
same as 144 reversed. There are few numbers which have this property.
Write a program to find out whether any more such numbers exist in the
range of 10 to 100.*/

#include <stdio.h>

int reverse(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

void find_square_property_numbers(int start, int end)
{
    printf("Number pairs with the square property in the range of %d to %d:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        int square_i = i * i;
        int reversed_square_i = reverse(square_i);

        for (int j = i + 1; j <= end; j++)
        {
            if (square_i == reverse(j * j) && i == reverse(j))
            {
                printf("%d, %d\n", i, j);
            }
        }
    }
}

int main()
{
    int start_range = 10;
    int end_range = 100;

    find_square_property_numbers(start_range, end_range);

    return 0;
}
