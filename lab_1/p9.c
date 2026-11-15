#include<stdio.h>
int main()
{
    int s,d,h,m;
    printf("enter time in days hours and minuts\n");
    scanf("%d%d%d",&d,&h,&m);

    s=d*86400+h*3600+m*60;
    printf("your given time in seconds=%d",s);


}
