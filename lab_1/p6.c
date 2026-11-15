#include<stdio.h>
int main()
{   
    int a, b;
    printf("enter a amd b\n");
    scanf("%d %d",&a,&b);

    printf("your a=%d and b=%d before swapping\n",a,b);

    //_1_arithmetic way..
    a=a+b;
    b=a-b;
    a=a-b;

    /*
    //_2_without arithmetic..
    a=a^b;
    b=a^b;
    a=a^b;
    */
    
    printf("your a=%d and b=%d after swapping ",a,b);
    return 0;






}
