#include<stdio.h>
int main()
{
    char choice; 
    float a,b,r; //r=result.

    printf("---menu---");
    printf("A. addition\n");
    printf("S. subtraction\n");
    printf("M. multiplication\n");
    printf("D. division\n");
    printf("-----------------");

    printf("enter your choice(A,S,M,D):");
    scanf("%c",&choice);

    printf("enter two operands:");
    scanf("%f%f",&a,&b);

    switch(choice){
             
       
         case 'A' :
         case 'a' :
            r=a+b;
            printf("%.3f + %f = %f\n",a,b,r);
            break;
        
        case 'S' :
        case 's' :
            r=a-b;
            printf("%.3f - %f = %f\n",a,b,r);
            break;

        case 'M' :
        case 'm' :
            r=a*b;
            printf("%.3f * %f = %f\n",a,b,r);
            break;

         case 'D' :
         case 'd' :
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
