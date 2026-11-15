#include<stdio.h>
int main()
{
    int  i,a[10],sum=0;
    printf("enter 10 number for array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }

    printf("sum = %d",sum);
}
