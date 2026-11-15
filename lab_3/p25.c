#include<stdio.h>
int main(){
    int n;
    printf("enter an integer to print its multipicationtable: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d* %d =\t%d\n",n,i,n*i);
    }
    return 0;
}
