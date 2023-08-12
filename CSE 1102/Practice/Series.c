#include<stdio.h>
#include<math.h>
float fact(int a);
void main()
{
    int exit=0;

    while(exit==0)
    {
        int x,n,r,a;
        float sum;
        int select;
        printf("\nSelect the required series\n");
        printf("\n1. 1 + x2 /2! + x4 /4! + x6 /6! + .......xn /n!\n");
        printf("2. 1 - x 2 /2! + x4 /4! - x 6 /6! + .......xn /n!\n");
        printf("3. 1 + 1/1! + 1/2! + 1/3! + .....1/n!\n");
        printf("4. 1 + 1/1! + 2/2! + 3/3! + .....n/n!\n");
        printf("5. x - x 2 /3! + x3 /5! - x 4 /7! + x5 /9! -.......xn /(2n-1)!\n");
        printf("6. a + ar + ar2 + ar3+............+ar(n-1)\n");
        printf("0. Exit\n");
        scanf("%d",&select);

        switch(select)
        {
        case 1:
            x=0,n=0,sum=1;
            printf("\nEnter x= ");
            scanf("%d",&x);
            printf("\nEnter n(Even number)= ");
            scanf("%d",&n);
            for(int i=2; i<=n; i+=2)
                sum+=((x*i)/fact(i));
            printf("Sum= %f\n",sum);
            break;
        case 2:
            x=0,n=0,sum=1;
            printf("\nEnter x= ");
            scanf("%d",&x);
            printf("\nEnter n(Even number)= ");
            scanf("%d",&n);
            for(int i=2; i<=n; i+=2)
                sum+=(pow(-1,i-1)*((x*i)/fact(i)));
            printf("Sum= %f\n",sum);
            break;
        case 3:
            n=0,sum=1;
            printf("\nEnter n= ");
            scanf("%d",&n);
            for(int i=1; i<=n; i++)
                sum+=(1/fact(i));
            printf("Sum= %f\n",sum);
            break;
        case 4:
            n=0,sum=1;
            printf("\nEnter n= ");
            scanf("%d",&n);
            for(int i=1; i<=n; i++)
                sum+=i/fact(i);
            printf("Sum= %f\n",sum);
            break;
        case 5:
            x=0,n=0,sum=0;
            printf("\nEnter x= ");
            scanf("%d",&x);
            printf("\nEnter n= ");
            scanf("%d",&n);
            for(int i=1; i<=n; i++)
                sum+=(pow(-1,i-1)*((x*i)/fact((2*i)-1)));
            printf("Sum= %f\n",sum);
            break;
        case 6:
            a=0,r=0,n=0,sum=a;
            printf("\nEnter a= ");
            scanf("%d",&a);
            printf("\nEnter r= ");
            scanf("%d",&r);
            printf("\nEnter n= ");
            scanf("%d",&n);
            for(int i=2; i<=n; i++)
                sum+=((a*r)*(i-1));
            printf("Sum= %f\n",sum);
            break;
        case 0:
            exit=1;
            break;


        }
    }
}
float fact(int a)
{
    int f =1;
    for(int i = 1; i<=a; i++)
    {
        f=f*i;
    }

    return f;
}
