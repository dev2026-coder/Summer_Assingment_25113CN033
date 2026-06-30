#include <stdio.h>

#define ASCII_SIZE 256

void charFrequency(char str[]) {
    int freq[ASCII_SIZE] = {0};

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print characters with non‑zero frequency
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[200];
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

    charFrequency(str);
    return 0;
}