#include<stdio.h>
int main()
{
    int n;

    printf("enter a positive integer\n");
    scanf("%d",&n);
    printf("factors of %d are:",n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && i!=n){
            printf("%d,",i);
        }
        if(i==n){
            printf("%d",i);
        }
    }
    return 0;

}
