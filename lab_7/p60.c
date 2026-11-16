#include<stdio.h>
void evenodd(int a);
void main()
{
    int a;
    printf("enter your integer number");
    scanf("%d",&a);
  evenodd(a);
 
}
void evenodd(int a)
{
    
    if(a%2==0){
        printf("%d id even",a);
    }else{
        printf("%d is odd",a);
    }
   return a;
}
