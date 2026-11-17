#include <stdio.h>

int main() {
    char s[100];
    int len = 0, i = 0;
    int flag = 1; 

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

   
    while (s[len] != '\0' && s[len] != '\n') {
        len++;
    }

   
    int l = 0;
    int r = len - 1;

    while (l < r) {
        if (s[l] != s[r]) {
            flag = 0; 
            break;
        }
        l++;
        r--;
    }

  
    if (flag == 1) {
        printf("string is a palindrome.\n");
    } else {
        printf(" string is not palindrome.\n");
    }

    return 0;
}
