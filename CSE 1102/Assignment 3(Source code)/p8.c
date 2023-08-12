/*WAP to input a number and print its reverse number. Also check that the
number is palindrome or not.*/
#include<stdio.h>
int main()
{
    int num, temp, r, rev = 0;
    scanf("%d", &num);
    temp = num;
    while(num > 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    printf("Given number = %d\n", temp);
    printf("Reverse number = %d\n", rev);
    if(temp == rev)
    {
        printf("%d is a palindrome number\n", temp);
    }
    else
    {
        printf("%d is not a palindrome number\n", temp);
    }
    return 0;
}
