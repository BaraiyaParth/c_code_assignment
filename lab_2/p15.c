#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,t,p; //t=total and p=percentage..
    printf("enter your five subject mark out of 100\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

    t=s1+s2+s3+s4+s5;
    p=t/5;
    printf("\ntotal marks :%f\n",t);
    printf("percentage:%f\n",p);

    if(p>=80.0){
        printf("division:First division\n");
    }
    else if(p>=50.0){
        printf("division:Second division\n");
    }
    else if(p>=40.0){
        printf("division:Third division\n");
    }
    else{
        printf("division:Fail\n");
    }
    return 0;


}
