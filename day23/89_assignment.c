#include <stdio.h>
#include <string.h>

char firstNonRepeating(char str[]) {
    int freq[256] = {0};
    for (int i = 0; str[i]; i++) freq[(unsigned char)str[i]]++;
    for (int i = 0; str[i]; i++)
        if (freq[(unsigned char)str[i]] == 1)
            return str[i];
    return '\0';
}

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char ch = firstNonRepeating(str);
    if (ch) printf("First non-repeating: %c\n", ch);
    else printf("None found.\n");
    return 0;
}