#include<stdio.h>
int main()
{
    char s[100];
    int i,count=0;

    printf("enter a string:");
    fgets(s,sizeof(s),stdin);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            count++;
        }
    }
    printf("total vowel:=%d\n",count);
    return 0;
}
