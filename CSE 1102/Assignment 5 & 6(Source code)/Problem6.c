// Write a program to find the total words in a input string
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    gets(s);
    int count = 1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i - 1] == ' ')
            count++;
    }
    printf("Total words: %d", count);
}