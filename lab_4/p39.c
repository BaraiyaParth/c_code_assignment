#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of term");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       
        if(i<n){
             printf("%d/%d! + ",i,i);
        }
        else{
             printf("%d/%d!  ",i,i);
        }
    }
   /* int n,j;
    float i,x, q,sum=0.0;
    printf("enter the number of term what u want for the series");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {   
        x=1;
        for(j=1;j<=i;j++){
            x*=j;
        }
        q=(float)i/x;
        sum=sum+q;
    }
    printf("%f",sum);
    */

}
