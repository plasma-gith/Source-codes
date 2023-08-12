/*5. WAP to print the sum of negative numbers, sum of positive even numbers
and sum of positive odd numbers from a list of numbers entered by the user.*/
#include <stdio.h>

int main()
{
    int num, sumN = 0, sumPE = 0, sumPO = 0;

    printf("Enter the numbers (enter 0 to stop):\n");

    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
            break;
        if (num < 0)
        {
            sumN += num;
        }
        else if (num % 2 == 0)
        {
            sumPE += num;
        }
        else
        {
            sumPO += num;
        }
    }

    printf("Sum of negative numbers: %d\n", sumN);
    printf("Sum of positive even numbers: %d\n", sumPE);
    printf("Sum of positive odd numbers: %d\n", sumPO);

    return 0;
}
