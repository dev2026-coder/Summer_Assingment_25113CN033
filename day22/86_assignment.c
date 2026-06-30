#include <stdio.h>
#include <stdbool.h>

int countWords(char str[]) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline (but countWords handles it)
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Number of words: %d\n", countWords(str));
    return 0;
}