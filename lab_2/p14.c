#include<stdio.h>
int main()
{
    char c;
    printf("enter the character:");
    scanf("%c",&c);

    if(c>='A' && c<='Z')
    {
        printf("'%c' is a capital letter\n",c);
    }
    else if(c>='a' && c<='z')
    {
        printf("'%c' is a small letter\n",c);
    }
    else if(c>='0' && c<='9')
    {
        printf("'%c' is a digit\n",c);
    }
    else{
        printf("'%c' is a special symbol\n",c);
    }
    return 0;

    
}
