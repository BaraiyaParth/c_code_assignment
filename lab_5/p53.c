#include<stdio.h>
int main()
{
    int a[3][3],i,j,rsum;

    printf("enter element of 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    for(i=0;i<3;i++)
    {
        rsum=0;
        for(j=0;j<3;j++)
        {
            rsum+=a[i][j];
        }
        printf("sum of row %d = %d\n",i+1,rsum);
    }
   return 0;
}
