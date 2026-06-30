#include <stdio.h>
#include <string.h>

char firstRepeating(char str[]) {
    int freq[256] = {0};
    for (int i = 0; str[i]; i++) {
        if (freq[(unsigned char)str[i]] == 1)
            return str[i];
        freq[(unsigned char)str[i]]++;
    }
    return '\0';
}

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char ch = firstRepeating(str);
    if (ch) printf("First repeating: %c\n", ch);
    else printf("None found.\n");
    return 0;
}