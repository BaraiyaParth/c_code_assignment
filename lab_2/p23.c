#include<stdio.h>
int main()
{
    int b,e; //b=base ,e=exponent..
    long long r=1;

    printf("enter base number:");
    scanf("%d",&b);
    printf("enter exponent(positive integer):");
    scanf("%d",&e);

    if(e>=0){
        for(int i=1;i<=e;i++){
            r*=b;
        }
    }
    printf("%d is your result",r);  

    /*in process*/
}
