#include<stdio.h>
struct book{
    int id;
    char t[100];
    char a[100];
    float p;
};
struct book readbook(){
    struct book b;
    
    printf("enter book id:\n");
    scanf("%d",&b.id);

    printf("enter book title:");
    scanf(" %[^\n]",b.t);

    printf("enter book author name:");
    scanf(" %[^\n]",b.a);

    printf("enter book price:\n");
    scanf("%f",&b.p);

    return b;
}
void displaybook(struct book b){
    printf("\n---about book---\n");
    printf("book id   :%d\n",b.id);
    printf("title     :%s\n",b.t);
    printf("author    :%s\n",b.a);
    printf("price     :%.3f\n",b.p);
   
}
int main(){
    struct book mybook;
    mybook=readbook();
    displaybook(mybook);
    return 0;   
}


/*void readbook(int *id,char t[],char a[],float* p)
{
    printf("enter book id:\n");
    scanf("%d",id);
  
    printf("enter book title:");
    scanf(" %[^\n]",t);

    printf("enter book author name:");
    scanf(" %[^\n]",a);

    printf("enter book price:\n");
    scanf("%f",p);
}
void displaybook(int id,char t[],char a[],float p)
{
    printf("\n---about book---\n");
    printf("book id   :%d\n",id);
    printf("title     :%s\n",t);
    printf("author    :%s\n",a);
    printf("price     :%.3f\n",p);
}
int main()
{
    int id;
    char t[50];
    char a[50];
    float p;
    readbook(&id,t,a,&p);
    displaybook(id,t,a,p);
    return 0;
}*/
