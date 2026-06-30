#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads newline, we need to remove it

    // Remove trailing newline if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Length = %d\n", stringLength(str));
    return 0;
}