#include<stdio.h>
int main()
{
   char c;
   printf("enter the character");
   scanf("%c",&c);

   (c>='a' && c<='z')
     ?printf("'%c' is a lowercase letter",c)
     :printf("'%c' is Not a lowercase letter",c);
    return 0;
}
