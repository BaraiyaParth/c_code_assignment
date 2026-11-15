#include<stdio.h>
int main()
{
    float u,a;//u=unit  , a=amount ... 

    printf("enter the total units");
    scanf("%f",&u);

    if(u<=0.0){
        printf("invalid input!! ");
        return 1;
    }
    if(u<=200){
        a=u*0.50;
    }
    else if(u<=400){
        a=100+(u-200)*0.65;
    }
    else if (u<=600){
        a=230+(u-400)*0.80;
    }
    else{
        a=425+(u-600)*1.25;
    }
    printf("%f is your total electricity bill amount",a);
}
