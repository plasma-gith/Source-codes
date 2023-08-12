//If a 0-9 digit number is input through the keyboard, write a program to
//reverse the number.

#include <stdio.h>
int main()
{
    int N, x, a = 0;

    printf("Number of digits: ");
    scanf("%d", &N);
    printf("Enter the number: ");
    scanf("%d", &x);

    for(int i = 0; i < N; i++)
    {
        a = (a * 10) + (x % 10);
        x = x / 10;

    }
    printf("Reversed number: %05d\n", a);
}