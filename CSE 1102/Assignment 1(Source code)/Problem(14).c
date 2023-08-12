#include <stdio.h>
int main()
{
    float h, c, ts;
    printf("Enter Hardness, Carbon content and Tensile strength:\n");
    scanf("%f%f%f", &h, &c, &ts);

    if (h > 60 && c < 0.7 && ts > 5000)
    {
        printf("Grade 10\n");
    }
    else if (h > 60 && c < 0.7)
    {
        printf("Grade 9\n");
    }
    else if (c < 0.7 && ts > 5000)
    {
        printf("Grade 8\n");
    }
    else if (h > 60 && ts > 5000)
    {
        printf("Grade 7\n");
    }
    else if (h > 60 || c < 0.7 || ts > 5000)
    {
        printf("Grade 6\n");
    }
    else
    {
        printf("Grade 5\n");
    }

    return 0;
}