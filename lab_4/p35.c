#include<stdio.h>
int main()
{
    int sum=0,r;
    long long num,q;
    printf("enter number");
    scanf("%lld",&num);
    if(num<0){
        num=-num;
    }
    do{
        sum=0;
        q=num;
        while (q>0)
        {
            r=q%10;
           sum=sum+r ;
         //  printf("%d\n",sum);
           q=q/10;
        }
        num=sum;
        
    }while (num>9);
    printf("%d is your single digit sum of your number",sum);
    
    
}
