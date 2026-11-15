#include<stdio.h>
int main()
{
    int a[10],i,eno=0,ono=0;//eno=number of even no.. &ono=number of odd no...
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
       if(a[i]%2==0){
        eno++;
       }
       else{
        ono++;
       }
    }
    printf("\ntotal even no=%d & total odd no=%d",eno,ono);
    




}
