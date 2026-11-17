#include<stdio.h>
int main()
{
    char s[100];
    int i=0;
    printf("enter a string:");
    fgets(s,sizeof(s),stdin);

    while(s[i]!='\0'){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
        i++;
    }
    printf("new string:%s",s);
    return 0;
}
