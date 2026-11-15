#include<stdio.h>
int main()
{
    int s;//s=sales
    float c;//c=commission

    printf("enter sales amount");
    scanf("%d",&s);
    if(s<1){
        printf("invalid sales");
        return 1;
    }

    if(s<=500 && s>0){
        c=s*5/100;
        printf("%f is your commission",c);
    }
    else if(s>500 && s<=2000){
        c=35 + (s-500)*10/100;
        printf("%f is your commission",c);
    }
    else if(s>2000 &&s<=5000){
        c=185+(s-2000)*12/100;
        printf("%f is your commission",c);
    }
    else{
        c=s*12.5/100;
        printf("%f is your commission",c);
    }
    return 0;

}
