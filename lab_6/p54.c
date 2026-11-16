#include<stdio.h>
int main()
{
    int a[3][3],t[3][3],i,j;

    printf("enter element of 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         t[j][i]=a[i][j]; 
            
        }
    }
    
    printf("\noriginal matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",a[i][j]);
           
        }
        printf("\n");
    }
    printf("transpose matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",t[i][j]);
           
        }
        printf("\n");
    }
    return 0;

}
