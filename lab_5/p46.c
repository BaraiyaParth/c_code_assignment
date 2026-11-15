#include<stdio.h>
#include<limits.h>
int main()             
{
    int n,i;
    printf("enter size of array(atleast 2)");
    scanf("%d",&n);

    int a[n];
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max =INT_MIN;
    int secmax =INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>max){
            secmax=max;
            max=a[i];
        }
        else if(a[i]>secmax && a[i]!=max){
            secmax=a[i];
        }
    }
    printf("max=%d\n",max);
    if(secmax==INT_MIN){
        printf("smax not exit");
    }else{
        printf("smax=%d",secmax);
    }

    return 0;

}
