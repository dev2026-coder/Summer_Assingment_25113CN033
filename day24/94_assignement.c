#include <stdio.h>
#include <string.h>

void compress(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    compress(str);
    return 0;
}