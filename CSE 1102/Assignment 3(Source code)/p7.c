/*7. Write a menu driven program which has following options:

i. Factorial of a number
ii. Prime or Not
iii. Odd or even
iv. Exit.*/

#include<stdio.h>
int isPrime(int num);
int fact(int a);
int odd_even(int num);
void main()
{
    while(1)
    {


        int select;
        int n;
        printf("\nSelect option\n");
        printf("\n1. Factorial of a number\n");
        printf("2. Prime or Not\n");
        printf("3. Odd or Even\n");
        printf("4. Exit\n");
        scanf("%d",&select);
        switch(select)
        {
        case 1:

            printf("\nEnter the Number: ");
            scanf("%d",&n);
            printf("Factorial = %d\n",fact(n));
            break;
        case 2:
            printf("\nEnter the Number: ");
            scanf("%d",&n);
            if (isPrime(n)==1)
                printf("%d is a Prime Number\n",n);
            else
                printf("%d is not a Prime Number\n",n);
            break;
        case 3:
            printf("\nEnter the Number: ");
            scanf("%d",&n);
            if (odd_even(n)==1)
                printf("%d is an Even Number\n",n);
            else
                printf("%d is an Odd Number\n",n);
            break;
        case 4:
            printf("\nExiting the Program\n");
            return 0;

        }
    }

}





int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int fact(int a)
{
    float f =1;
    for(int i = 1; i<=a; i++)
    {
        f=f*i;
    }

    return f;
}
int odd_even(int num)
{
    if (num%2==0)
        return 1;
    else
        return 0;
}
