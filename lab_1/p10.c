#include<stdio.h>
int main()
{
    int m,p,c,e;
    float cm;
    printf("enter your marks of four subject in sequence maths phisics chemisrty out of 200 and english out of 100\n");
    scanf("%d%d%d%d",&m,&p,&c,&e);


    cm=m/2+p/2+c/2+e;

    printf("your cutoff marks is %f",cm);
    return 0;


}
