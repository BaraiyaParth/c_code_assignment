#include<stdio.h>
#include<math.h>

int main()
{
    int option;
    float area;
   
    printf("enter option 1 or 2 according to your awailable data\n 1.if you have data about hight and base\n 2.if you have data about all side length\n");
    scanf("%d",&option);

    if(option==1)
    { 
        float h,b; //h=hight ,b=base
       
        printf("enter value of hight and base\n");
        scanf("%f%f",&h,&b);

        area = (h*b)/2;
        printf("area of triangle=%f",area);
    }
    else if(option==2)
    {
        float a,b,c,s; //a b c are three side length..
       
        printf("enter the length of each side\n");
        scanf("%f%f%f",&a,&b,&c);
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area of triangle=%f",area);
    }
    else
    {
        printf("wrong option"); 
    }
    

}
