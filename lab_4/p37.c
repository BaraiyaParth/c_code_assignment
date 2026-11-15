#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the first %d odd num are\n",n);
    for(i=1;i<n+1;i++){
        printf("%d\n",2*i);
    }
    printf("\n");
    return 0;
}
