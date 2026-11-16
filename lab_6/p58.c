#include<stdio.h>
int main()
{
    int n, i,num,found=0;

    printf("enter the size of array");
    
    scanf("%d",&n);
    if(n>0){
    int a[n];

    printf("enter (n) element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter element you want to find\n");
    scanf("%d",&num);

    for(i=0;i<n;i++){
        if(a[i]==num){
            printf("element= %d found at index=%d (position=%d)\n",num,i,i+1);
            found=1;
            break;
        }
    }
    if(!found){
        printf("\nelement %d is not present in the array",num);
    }
}else{
    printf("enter n>0");
}
}
