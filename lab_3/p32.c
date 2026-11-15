#include<stdio.h>   
int main()
{   
    int n,i,smax,max;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n>1){

    int a[n];
    printf("enter n element");
  
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    smax=a[0];
   
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            smax=max;
            max=a[i];
            
           
        }else if((smax<a[i]  || max==smax) && max!=a[i]){   //or we can do with limits.h
            smax=a[i];
        }
    }

    printf("\nmax=%d\nsmax=%d",max,smax);


   }
    else{
        printf("minimum limit of n is 2");
    }

}
