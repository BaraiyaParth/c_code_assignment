#include<stdio.h>
int main()
{
    int n,i;
    long long f=1; //f =fectorial..  this dat type for large value..

    printf("enter a positive integer:");
    scanf("%d",&n);

    if(n<0){
        printf("Error!..factorial of a negative number dosen't exist..\n");
    }
    else{
        for(i=1;i<=n;i++){  
            f*=i;
        }
        printf("factorial of %d = %lld\n",n,f);

      }
    return 0;

}
