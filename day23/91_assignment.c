#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char s1[], char s2[]) {
    int freq[256] = {0};
    for (int i = 0; s1[i]; i++) freq[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i]; i++) freq[(unsigned char)s2[i]]--;
    for (int i = 0; i < 256; i++)
        if (freq[i] != 0) return false;
    return true;
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    printf(areAnagrams(s1, s2) ? "Anagrams\n" : "Not anagrams\n");
    return 0;
}