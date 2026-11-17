#include<stdio.h>
int main()
{   
    int a, b,temp;
    printf("enter a amd b\n");
    scanf("%d %d",&a,&b);

    printf("your a=%d and b=%d before swapping\n",a,b);

   // with the help of third variable..

    temp=a;
    a=b;
    b=temp;
    printf("your a=%d and b=%d after swapping ",a,b);

    printf("your a=%d and b=%d after swapping ",a,b);

    return 0;






}
