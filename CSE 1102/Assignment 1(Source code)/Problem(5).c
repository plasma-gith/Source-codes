#include <stdio.h>
int main()
{
    float bs, hr, ma, gs; //bs = basic salary//

    printf("Enter basic salary: ");
    scanf("%f", &bs);

    if (bs >= 0)
    {
        hr = bs * 30 / 100; //house rent//
        ma = bs * 5 / 100; //medical allowance//
        gs = bs + hr + ma;
        printf("Rahim's gross salary: %f\n", gs); //gross salary//
    }
    else
    {
        printf("Enter a valid salary!\n");
    }

    return 0;
}