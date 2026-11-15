#include<stdio.h>
int main()
{
    char op; //op =operator
    float a,b,r; //r=result.

    printf("enter an operator(+ - * /):");
    scanf("%c",&op);

    printf("enter two operands:");
    scanf("%f%f",&a,&b);

    switch(op){
             
        case '+' :
            r=a+b;
            printf("%f + %f = %f\n",a,b,r);
            break;
        
        case '-' :
            r=a-b;
            printf("%f - %f = %f\n",a,b,r);
            break;

        case '*' :
            r=a*b;
            printf("%.3f * %.6f = %f\n",a,b,r);
            break;

         case '/' :
            if(b!=0.0){
                r=a/b;
                printf("%.3f / %f = %f\n",a,b,r);
                break;
            }
            else{
                printf("Error!..division by zero is not allowed\n");
            }
            break;

        default:
          printf("Error!..invalid operator\n");
        }
    return 0;

}
