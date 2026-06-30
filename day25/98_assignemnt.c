#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void commonChars(char s1[], char s2[]) {
    int freq[256] = {0};
    for (int i = 0; s1[i]; i++) freq[(unsigned char)s1[i]] = 1;
    printf("Common chars: ");
    for (int i = 0; s2[i]; i++)
        if (freq[(unsigned char)s2[i]] == 1) {
            printf("%c ", s2[i]);
            freq[(unsigned char)s2[i]] = 2; // avoid duplicates
        }
    printf("\n");
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    commonChars(s1, s2);
    return 0;
}