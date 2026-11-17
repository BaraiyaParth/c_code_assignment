#include <stdio.h>

int main() {
    char s[200];
    int i = 0;
    int u = 0, l = 0, d = 0, sc = 0;

    printf("Enter a line of text: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            u++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            l++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            d++;
        } else if (s[i] != '\n') {
            sc++;
        }
        i++;
    }

    printf("\nupper letters: %d\n", u);
    printf("lower letters: %d\n", l);
    printf("digits: %d\n", d);
    printf("special symbols (including spaces): %d\n", sc);

    return 0;
}
