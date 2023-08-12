/*WAP to find out the count of the digits of a given integer(without loop and using loop)*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n , digits;
    scanf("%d" , &n);
    digits = log10(n)+1;
    printf("Number of digits = %d (without loop)\n" , digits);
    int i = 0;
    while(n!=0)
    {
        n = n/10;
        i++;
    }
    printf("Number of digits = %d (using loop)\n" , i);
    return 0;
}
