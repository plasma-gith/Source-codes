// Write a program to capitalize the first letter of a word in an input string
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char s[100];
    gets(s);
    strlwr(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (i == 0 || s[i - 1] == ' ')
            s[i] = toupper(s[i]);
    }
    puts(s);
}