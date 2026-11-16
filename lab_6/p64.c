#include<stdio.h>
void fibonaki(int);
int main()
{
    int n;
    printf("first 5 fibonacci num");
    fibonaki(5);
    printf("first 10 fibonacci num");
    fibonaki(10);
    printf("first 15 fibonacci num");
    fibonaki(15);

}
void fibonaki(int n)
{
    int f1=0,f2=1,next;
    for(int i=1;i<=n;i++)
    {
        printf(" %d ",f1);
        next=f1+f2;
        f1=f2;
        f2=next;
    }
    printf("\n");
}
