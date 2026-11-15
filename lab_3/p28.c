#include<stdio.h>
#include<math.h>
int main(){

    int num,temp,r,n=0;
    double sum=0;


    printf("enter an integer:");
    scanf("%d",&num);
    
    temp=num;
    while(temp!=0)
    {
        n++;
       temp/=10; 
    }

    temp=num;
    while (temp!=0)
    {
        r=temp%10;
        printf("%d",r);
        sum+=pow(r,n);
       printf("\nsum%lf\n",sum);
        temp/=10;

    }

    if((int)sum==num){
        printf("%d is an armstrong number",num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
    return 0;


    

    

  /*    //for 3 digit only..
   int num,q,sum=0,temp=0;
    printf("enter 3 digit num");
    scanf("%d",&num);
    temp=num;

    while(num!=0){
        q=num%10;
        sum=sum+q*q*q;
        num=num/10;

    }

    if(temp==sum){
        printf("num is armstong=%d",temp);
    }else{
        printf("num is not armstong=%d",temp);
    }

*/
}
