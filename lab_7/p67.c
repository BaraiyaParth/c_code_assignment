#include<stdio.h>
int findmax(int a[],int n);
int main()
{
    int a[100],n,max;
    printf("enter the number of element in array\n");
    scanf("%d",&n);

    max=findmax(a,n);
    printf("max num in array=%d",max);

    return 0;
}
int findmax(int a[],int n)
{
    int i,max;

    printf("enter %d element",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
