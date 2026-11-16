#include<stdio.h>
void exchange(int*a,int*b)
{
    int tamp=*a;
    *a=*b;
    *b=tamp;
    
}
void main()
{
    int x,y;
    printf("enter value (int) of x\n");
    scanf("%d",&x);
    printf("enter value (int) of y\n");
    scanf("%d",&y);
    printf("before exchange x=%d,y=%d",x,y);
    exchange(&x,&y);   
    printf("\nafter exchange x=%d,y=%d",x,y);
   


}
