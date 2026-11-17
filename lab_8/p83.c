#include <stdio.h>
#include <string.h>

int main() {
    char s[100], temp;
    int i, j, len;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    
    s[strcspn(s, "\n")] = '\0';   //good one but ille..

    len = strlen(s);

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("string after sorting char: %s\n", s);

    return 0;
}
