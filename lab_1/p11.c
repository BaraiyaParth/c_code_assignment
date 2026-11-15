#include<stdio.h>
int main()
{
    long s;
    int d,h,m;
    printf("enter total seconds");
    scanf("%ld",&s);

    d=s/86400;
    s=s%86400;

    h=s/3600;
    s=s%3600;

    m=s/60;
    s=s%60;

    printf("your time is %d days %d hours %d minuts %ld s",d,h,m,s);

    
}
