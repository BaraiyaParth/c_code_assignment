#include<stdio.h>
int main()
{
    int n,i;

    printf("enter the number of element:");
    scanf("%d",&n);

    if(n<=0){
        printf("error! please enter positive num");
       return 0;
    }

    int a[n];

    printf("\nenter %d num\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];

    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("maximum number is :%d\n",max);
    printf("minimum number is :%d\n",min);
    

}
