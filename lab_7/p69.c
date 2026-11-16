#include <stdio.h>
struct book {
    int id;
    char t[50];
    char a[50];
    float p;
};
void readbook(struct book *b);
void displaybook(struct book *b);
int main() {
    struct book b1;
    struct book *ptr;
    ptr = &b1;
    readbook(ptr);
    displaybook(ptr);
    return 0;
}
void readbook(struct book *b) {
    printf("enter Book id: ");
    scanf("%d", &(*b).id);

    printf("enter Book title: ");
    scanf(" %[^\n]",(*b).t);  

    printf("enter Author name: ");
    scanf(" %[^\n]",(*b).a);

    printf("enter Book price: ");
    scanf("%f", &(*b).p);
}
void displaybook(struct book *b) {
    printf("\n--- book details ---\n");
    printf("book iD : %d\n", (*b).id);
    printf("title   : %s\n", (*b).t);
    printf("author  : %s\n",(*b).a);
    printf("price   : %.3f\n",(*b).p);
}
