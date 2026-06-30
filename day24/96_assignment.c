#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int freq[256] = {0}, j = 0;
    for (int i = 0; str[i]; i++) {
        if (!freq[(unsigned char)str[i]]) {
            freq[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    removeDuplicates(str);
    printf("After removing duplicates: %s\n", str);
    return 0;
}