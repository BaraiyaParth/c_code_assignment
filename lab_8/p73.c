#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i=0;

    printf("enter a string:");
    scanf("%[^\n]",a);

    while (a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
   b[i]='\0';//impotant
    printf("original :%s\n",a);
    printf("copied:%s\n",b);
    printf("%d",strlen(b));
     printf("%d",strlen(a));

    return 0;
    
}
