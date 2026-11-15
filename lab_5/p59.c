#include<stdio.h>
int main()
{
    int n, i,key,count=0;

    printf("enter the size of array(>0)");
    scanf("%d",&n);
    int a[n];

    printf("enter (n) element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter element you want to find\n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key){
            count++;
        }
    }
    printf("\nthe element %d occurs %d times",key,count);
}
