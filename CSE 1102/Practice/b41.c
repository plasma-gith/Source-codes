#include <stdio.h>
int main()
{
    char name[50];
    int age;
    printf("Input name and age:\n");
    scanf("%s%d", &name, &age);

    for (int i = 1; i <= age; i++)
    {
        printf("%s\n", name);
    }
    return 0;
}
