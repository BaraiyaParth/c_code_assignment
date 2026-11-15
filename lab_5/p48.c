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

    
    printf("array before swapping\n");
     printf("first array\n");
     for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\nsecond array\n");
     for(i=0;i<10;i++)
    {
        printf("%d\t",b[i]);
    }
    //swapping of array..with temp
    int temp;
    for(i=0;i<10;i++)
    {
      temp=a[i];
      a[i]=b[i];
      b[i]=temp;
    }

    printf("\narray after swapping\n");
     printf("first array\n");
     for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\nsecond array\n");
     for(i=0;i<10;i++)
    {
        printf("%d\t",b[i]);
    }

  
}
