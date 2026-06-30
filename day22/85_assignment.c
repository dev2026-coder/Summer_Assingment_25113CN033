#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;  // custom length

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j])
            return false;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    if (isPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}