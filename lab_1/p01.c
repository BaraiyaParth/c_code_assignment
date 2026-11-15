#include<stdio.h>
int main()
{
    int principal;
    float rate,time,simple_interest;
    //for take detail
    printf("enter the principal amount:$");
    scanf("%d",&principal);

    printf("enter the rate of interest:");
    scanf("%f",&rate);

    printf("enter the time perion in years:");
    scanf("%f",&time);

    //calcution for ...
    simple_interest=(principal*rate*time)/100;

    //for show the result
    printf("your amount of simple_interest is $%f",simple_interest);

    return 0;
}
