#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c,d;
    scanf("%d", &a);
    b = 2a;
    for(int i =1; i<=2a+1;i++){
        for(int j=1;j<=b;j++){
            printf(" ");
        }
        b=b-1;
        if(i==1i==a+1i==2a+1){
            for(int k=1;k<=2a+1;k++){
                printf("");
            }
        }
        else{
            printf("");
            for(int l=1;l<=a-1;l++){
                printf(" ");
            }
            printf("");
            for(int l=1;l<=a-1;l++){
                printf(" ");
            }
            printf("");
            for(int l=1;l<=a-1;l++){
                printf(" ");
            }
        }
        printf("\n");
    }
}
