#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],temp;
    int i=0,j=0;
    printf("enter first string:");
    scanf("%[^\n]",s);
    while(s[j]!='\0'){
        j++;
    }
    j--;//move on last char

 //   printf("j=%d,l=%d",j,strlen(s));
    while(i<j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    printf("reversed  string:%s",s);
    return 0;

}
