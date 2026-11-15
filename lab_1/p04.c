#include <stdio.h>
int main()
{
    float f,c; //f for fahrenhit and c for celsius

    printf("enter temperature in Fahrenheit:");
    scanf("%f",&f);

    // calculation..
    c=(f-32)*5/9;

    printf("%f Fahrenheit is equal to %f Centigrade\n",f,c);

    return 0;
}
