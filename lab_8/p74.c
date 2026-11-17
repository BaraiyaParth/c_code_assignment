#include<stdio.h>
int main()
{
    char s1[100],s2[50];
    int i=0,j=0;
    printf("enter first string:");
    scanf("%[^\n]",s1);
    getchar();           //or scanf(" %[^\n]",s2);
    printf("enter second string:");
    scanf("%[^\n]",s2);

    while (s1[i]!='\0')
    {
        i++;
    }
    while (s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    printf("concatenatedn string:%s\n",s1);
    return 0;
    
    

    
}
