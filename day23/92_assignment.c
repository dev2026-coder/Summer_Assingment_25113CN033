#include <stdio.h>
#include <string.h>

char maxOccurring(char str[]) {
    int freq[256] = {0}, max = 0;
    char result = '\0';
    for (int i = 0; str[i]; i++) {
        int idx = (unsigned char)str[i];
        freq[idx]++;
        if (freq[idx] > max) {
            max = freq[idx];
            result = str[i];
        }
    }
    return result;
}

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Max occurring: %c\n", maxOccurring(str));
    return 0;
}