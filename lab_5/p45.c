#include<stdio.h>
int main ()
{
    int a[10] ,i,posno=0,negno=0,zerono=0;//posno=number of positive int ... negno=number of negative int  ....zerono=number of zero;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf(" %d\t",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<0){
            negno++;
        }
        else if(a[i]>0){
            posno++;
        }
        else{
            zerono++;
        }
    }
    printf("\ntotal no. of positive element=%d",posno);
    printf("\ntotal no. of negative element=%d",negno);
    printf("\ntotal no. of zero element=%d",zerono);
}
