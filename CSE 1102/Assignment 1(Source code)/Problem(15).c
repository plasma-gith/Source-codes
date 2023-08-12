#include <stdio.h>
int main()
{
    char n;
    printf("Enter the symbol:");
    scanf("%c", &n);

    if (n >= 'A' && n <= 'Z')
    {
        if (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
        {
            printf("Capital Vowel\n");
        }
        else
        {
            printf("Capital Consonant\n");
        }
    }

    else if (n >= 'a' && n <= 'z')
    {
        if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
        {
            printf("Small Vowel\n");
        }
        else
        {
            printf("Small Consonant\n");
        }
    }

    else if ( n >= '0' && n <= '9')
    {
        printf("Digit\n");
    }

    else
    {
        printf("Special symbol\n");
    }

    return 0;
}