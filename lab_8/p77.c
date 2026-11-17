#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[100];
    int l, r;
    printf("enter first string:");
    scanf("%[^\n]",s1);
  //  getchar();          
    printf("enter second string:");
    scanf(" %[^\n]",s2);

   
   
    l = strlen(s1);
    printf("\n1. Length of first string: %d\n", l);


    strcpy(s3, s1);
    printf("2. Copied first string into third string: %s\n", s3);


    r = strcmp(s1, s2);
    if (r == 0) {
        printf("3. Comparison: Both strings are equal.\n");
    } else if (r > 0) {
        printf("3. Comparison: First string is greater than second string.\n");
    } else {
        printf("3. Comparison: Second string is greater than first string.\n");
    }


    strcat(s1, s2);
    printf("4. Concatenated string (s1 + s2): %s\n", s1);
    printf("5. Reversed second string: %s\n", strrev(s2));

    return 0;
}
