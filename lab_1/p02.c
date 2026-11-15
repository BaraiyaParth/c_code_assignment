#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float pr;   // pr for percentage 
    //read marks
    printf("enter your five subject marks:\n");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

    total=a+b+c+d+e;
    pr=total/5; //reason behind formula pr= 1)total*100/500 or 2)total/500*100 but the seconde option give incorect value is total is less then 500 that is why we simplify the formula. its because of sequence ... 

    printf("your total marks is %d and your percentage is %f",total,pr);
    return 0;
}
