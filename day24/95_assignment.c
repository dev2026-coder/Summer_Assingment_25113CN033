#include <stdio.h>
#include <string.h>
#include <ctype.h>

void longestWord(char str[]) {
    int len = 0, maxLen = 0, start = 0, maxStart = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
            if (str[i] == '\0') break;
        }
    }
    if (maxLen > 0) {
        printf("Longest word: ");
        for (int i = maxStart; i < maxStart + maxLen; i++)
            putchar(str[i]);
        printf("\n");
    }
}

int main() {
    char str[200];
    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    longestWord(str);
    return 0;
}