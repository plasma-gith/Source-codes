#include <stdio.h>
int lcm(int a, int b);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", lcm(a,b));
    
    return 0;
}
int lcm(int a, int b)
{
    int max;
    if (a >= b)
        max = a;
    else
        max = b;
    while(1)
    {
        if((max % a == 0) && (max % b ==0))
            return max;
        max ++;
    }

}