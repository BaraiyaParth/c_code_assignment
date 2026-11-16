#include<stdio.h>
#include<math.h>
void armsrtong(int);
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    armsrtong(n);
}
void armsrtong(int n)
{
    int tamp,q,size=0;
    double sum=0;
    tamp=n;
    while(n!=0)
    {
        n=n/10;
        size++;
    }
  //  printf("size=%d",size);
    n=tamp;
    while (n!=0)
    {
       q=n%10;
        sum+=pow(q,size); 
      //  printf("\nsum=%lf",sum);
        n/=10;
    }
    n=tamp;
    if((int)sum==n){
        printf("\narmsrong num=%d",n);
    }else{
        printf("not armstrong=%d",n);
    }
    
   
}
