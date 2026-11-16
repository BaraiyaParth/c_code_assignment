#include<stdio.h>
float fact(int x)
{
    
    if(x==1||x==0) return 1;
   float f=x*fact(x-1);
    return f;
}
float ncr(int n,int r)
{
    float ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main()
{
    int n,r;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter r");
    scanf("%d",&r);
    float ans=ncr(n,r);
    printf("your NcR=%f",ans);
}
