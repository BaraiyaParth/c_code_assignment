#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nCharacter\tASCII Code\n");
    printf("-------------------------\n");

    while (name[i] != '\0' && name[i] != '\n') {
        printf("%c\t\t%d\n", name[i], name[i]);
        i++;
    }

    return 0;
}
