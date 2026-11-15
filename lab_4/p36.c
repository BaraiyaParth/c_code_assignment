#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the first %d odd num are\n",n);
    for(i=1;i<=n;i++){
        printf("%d\n",2*i-1);
    }
    printf("\n");
    return 0;
}
