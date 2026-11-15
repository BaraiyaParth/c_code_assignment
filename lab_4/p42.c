#include<stdio.h>
int main()
{
    int n,i,isPrime=0;

    printf("enter a positive integer");
    scanf("%d",&n);

    if(n<=1){
        printf("%d is neither prime nor composite",n);

    }else{

        for(i=2;i*i<=n;i++){
            if(n%i==0 ){
                isPrime=1;
                break;
            }
        }
        if(isPrime==0){
            printf("%d is prime number",n);
        }
        else{
            printf("%d is composite number",n);
        }
    }
    return 0;
}
