#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i=0,flag=0;
    printf("enter first string:");
    scanf("%[^\n]",s1);
  //  getchar();          
    printf("enter second string:");
    scanf(" %[^\n]",s2);
    while(s1[i]!='\0'||s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("both string are equal\n");
    }
    else{
        printf("both string are not equal\n");
    }
    return 0;

    //m2 coming soon...(for while)
}
