/*WAP to input a number and find out the sum of its digit.*/
#include<stdio.h>
int main()
{
    int num, r, sum = 0, temp;
    scanf("%d", &num);
    temp = num;
    while(num > 0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf("Sum of the digits of %d is = %d", temp, sum);
    return 0;
}
