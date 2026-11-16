#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("enter num");
    scanf("%d",&n);
   
   int x=prime(n);
   if(x==1){
        printf("return value =%d the num is prime",x);
    }else{
        printf("return value =%d the num is not prime",x);
    }
    return 0;
}
int prime(int n)
{ 
    int i,flag=0;
    for( i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
      

    }
    if(flag==1){
        return 0;
    }else{
        return 1;
    }
}

