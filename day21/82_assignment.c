#include <stdio.h>
#include <string.h>  // only for strlen in this example, but you can replace with own length

void reverseString(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;  // custom length

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}