#include<stdio.h>
int main()
{
    int i,j,a[10];
    printf("enter array (10) element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1]){
              a[j]=a[j]^a[j+1];
              a[j+1]=a[j]^a[j+1];
              a[j]=a[j]^a[j+1];
             }
         }

         printf("\n");
           
       /*  for(j=0;j<10;j++)
          {
           printf("%d\t",a[j]);
          }
      */

     }
         
     printf("\narray after sorting\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }

     
}
