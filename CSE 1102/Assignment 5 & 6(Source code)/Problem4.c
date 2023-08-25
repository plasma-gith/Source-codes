//Write a program to take your name and age as input and display it.
#include <stdio.h>
#include <string.h>
int main()
{
    char name[100]; int age;
    gets(name);
    scanf("%d", &age);
    printf("My name is %s.\nI am %d years old.", name, age);
    
    return 0;
}