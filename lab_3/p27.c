#include<stdio.h>
int main()
{
    int a,i,x=0; 
    printf("enter num");
    scanf("%d",&a);
    for( i=2; i<=(a/2);i++ )
    {
        if(a%i==0){
            x=1;
            
            break;
        }
        
    }
    if(x==0){
        printf("num is prime");
    }else{
        printf("num is not prime");
    }
    return 0;
}
