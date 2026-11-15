#include<stdio.h>
int main(){
    int num,sum=0,r;

    printf("enter a number ");
    scanf("%d",&num);

    if(num<0){
        num=-num;
    }
    
    while(num!=0)
    {
        r=num%10;
       // printf("%dr\n",r);
        
        sum=sum+r;
      //  printf("\n%d\n",sum);
        num/=10;
    }
    printf("sum of digit is %d",sum);
    return 0;
}
