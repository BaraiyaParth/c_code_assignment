#include<stdio.h>
#include<string.h>
int main()
{
    char ch,rch, s[100];
    int i=0,len;
    printf("entr string:");
    scanf("%50[^\n]",s);
    //getchar();
  
    printf("enter char you want to change:\n ");
    scanf(" %c",&ch);
   //  getchar();
 
    printf("entr new ch:");
    scanf(" %c",&rch);
    len= strlen(s);
    while(i<len){
        if(s[i]==ch){
            s[i]=rch;
          //  break;
        }
        i++;
    }
    printf("%s=new string.\n",s);
    
}
