#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sub[3][3],i,j;

    printf("enter element of 1st 3*3 matrix\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter element of 2nd 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nyour subtraction matrix\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",sub[i][j]);
           
        }
        printf("\n");
    }
}
