#include<stdio.h>
int main()
{
    int a[3][3],i,j,max,min;

    printf("enter element of 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    max=a[0][0];
    min=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(a[i][j]>max){
            max=a[i][j];
          } 
          if(a[i][j]<min){
            min=a[i][j];
          }
           
        }
    }
    
    printf("\nyour 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",a[i][j]);
           
        }
        printf("\n");
    }
    printf("maximum element in matrix =%d\n",max);
    printf("minimum element in matrix =%d",min);


}
