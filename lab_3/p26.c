#include<stdio.h>
int main(){
    int n;
    int s_odd=0,s_even=0;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            s_odd+=i;
        }
        else{
            s_even+=i;
        }
    }
    printf("\nsum of all odd numbers between 1 and %d = %d\n ",n,s_odd);
    printf("\nsum of all even numbers between 1 and %d = %d\n ",n,s_even);

}
