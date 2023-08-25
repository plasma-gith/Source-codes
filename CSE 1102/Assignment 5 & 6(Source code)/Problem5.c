// Write a program to print the total number to letters, vowel and consonant in a string
#include <stdio.h>
#include <string.h>
int main()
{
    int letters = 0, vowel = 0, cons = 0;
    char s[255];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            letters++;
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vowel++;
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'I' || s[i] == 'U')
                vowel++;
            else
            {
                cons++;
            }
        }
    }
    printf("Number of letters: %d\nNumber of vowel: %d\nNumber of consonant:%d", letters, vowel, cons);
    return 0;
}