#include<stdio.h>
int main()
{
  long  revo_time=31558150;
  int d,h,m,s;
  //d=days h=hours m=minuts s=seconds..
  d=revo_time/86400;
  s=revo_time%86400;

  h=s/3600;
  s=s%3600;

  m=s/60;
  s=s%60;

  printf("earth revolution time is %ld seconds\n",revo_time);
  printf("earth revolution time is %d days %d hours %d minuts %d seconds",d,h,m,s);


  
}
