#include<stdio.h>
int main()
{
    int i,a[10],b[10];
    printf("enter first array (10) element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter second array (10) element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("your array\n");
     printf("first array\n");
     for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
     printf("second array\n");
     for(i=0;i<10;i++)
    {
        printf("%d\n",b[i]);
    }
    

    printf("addition of array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]+b[i]);
    }
    
}
