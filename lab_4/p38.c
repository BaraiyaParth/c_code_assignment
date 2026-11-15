#include<stdio.h>
int main(){
    int n,i=1,t;

    printf("enter the maximum limit(n):");
    scanf("%d",&n);

    printf("the series is:");
    while (1)
    {
        t=i*i;
        if(t>n){
            break;
        }
        printf("%d",t);

        if((i+1)*(i+1)<=n){
            printf(",");
        }
        i++;
    }
    printf("\n");
    return 0;
    
}
