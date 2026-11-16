#include<stdio.h>
int findlength(char s[]){
    int l=0;

    printf("enter a line of text:");
    fgets(s,100,stdin);

    while(s[l]!='\0' && s[l]!='\n'){
        l++;
    }
    return l;
}
int main(){
    char text[100];
    int len;
    len=findlength(text);
    printf("length of the string is:%d\n",len);
    return 0;

}
