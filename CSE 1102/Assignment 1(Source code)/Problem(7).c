//If a 5-digit number is input through the keyboard, write a program to
//reverse the number.

#include <stdio.h>
int main()
{
    int x, a = 0;
    printf("Enter a 5 digit number: ");
    scanf("%d", &x);

    for(int i = 0; i < 5; i++)
    {
        a = (a * 10) + (x % 10);
        x = x / 10;

    }
    printf("Reversed number: %05d\n", a);
    return 0;
}