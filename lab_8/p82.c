#include <stdio.h>

int main() {
    char s[100];
    int i, chs = 0, ws = 1;

    printf("Enter a string: ");
    scanf("%[^\n]",s);

    for (i = 0; s[i] != '\0'; i++) {
        chs++;

        if (s[i] == ' ' && s[i+1]!=' ' && s[i+1]!='\0') {  //!!!oyu need to debug..
            ws++;
        }
    }

    printf("Total characters: %d\n", chs);
    printf("Total words: %d\n", ws);

    return 0;
}
