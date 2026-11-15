#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the number(negative number enter for stop) ");
    
   

    while(5)
    {
        scanf("%d",&num);

        if(num<0){
            break;
        }
        sum+=num;
    }
    printf("sum = %d",sum);
    return 0;
}
