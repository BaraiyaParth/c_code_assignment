#include <stdio.h>
int main()
{
    float basic_salary,hra,da,gross_salary;
    
    //scan salary
    printf("entre basic salary of the employee:$");
    scanf("%f",&basic_salary);

    hra=0.2*basic_salary;
    da=0.4*basic_salary;

    gross_salary=basic_salary + hra + da;

    printf("\n--- Salary Details ---\n");
    printf("Basic Salary:$%f\n", basic_salary);
    printf("HRA(20%%)    :$%f\n",hra);
    printf("DA(40%%)     :$%f\n",da);
    printf("Gross Salary:$%f\n",gross_salary);

    return 0;

}
