#include<stdio.h>
void palindrome(int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    palindrome(n);
}
void palindrome(int num)
{
    int tamp,q,sum=0;
    tamp=num;

    while(num!=0){
        q=num%10;
        sum=sum*10+q;
        num=num/10;
    }
    
    if(tamp==sum){
       printf("num is palindrom=%d",tamp);
    }else{
       printf("num is not palindrom=%d",tamp);
    }

    
    

}

