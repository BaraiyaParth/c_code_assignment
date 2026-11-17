#include <stdio.h>

int main() {
    char s[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%[^\n]",s);// fgets(s, sizeof(s), stdin);
//    printf("sizeof(s)=%d",sizeof(s));

    printf("Enter a char to search: ");
    getchar();
    scanf("%c", &ch);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Char '%c' is present in the string at position %d\n", ch, i + 1);
    } else {
        printf("Char '%c' is not present in the string\n", ch);
    }

    return 0;
}
