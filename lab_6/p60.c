#include<stdio.h>
int evenodd(int a);
void main()
{
    int a;
    printf("enter your integer number");
    scanf("%d",&a);
 //   evenodd(a);
  printf(evenodd(a));
}
int evenodd(int a)
{
    
    if(a%2==0){
        printf("%d id even",a);
    }else{
        printf("%d is odd",a);
    }
   return a;
}
