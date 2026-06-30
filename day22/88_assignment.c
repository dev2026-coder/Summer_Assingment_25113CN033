#include <stdio.h>

void removeSpaces(char str[]) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // terminate the new string
}

int main() {
    char str[200];
    printf("Enter a string (with spaces): ");
    fgets(str, sizeof(str), stdin);

    // Remove newline (but we can keep it for removal? We'll remove it)
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    removeSpaces(str);
    printf("String without spaces: '%s'\n", str);
    return 0;
}