#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c,num=10;
  /* printf("enter num of terms of  fibonacci seriese");
    scanf("%d",num);*/
    
    while(num!=0)
    {
        c=a+b;
        b=a;
        printf("\n%d\n",b);
        a=c;
        num--;
    }
}
