#include<stdio.h>
int main(){
    int num,rnum=0,r;

    printf("enter a number ");
    scanf("%d",&num);

    
    while(num!=0)
    {
        r=num%10;
  //      printf("\nr%d\n",r);
        rnum=rnum*10+r;
        num/=10;
    }
    printf("your revers number is %d",rnum);
    return 0;
}
