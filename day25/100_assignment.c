#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
#define LEN 50

void sortByLength(char words[][LEN], int n) {
    char temp[LEN];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
}

int main() {
    char words[MAX][LEN];
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();
    printf("Enter words:\n");
    for (int i = 0; i < n; i++)
        fgets(words[i], LEN, stdin);
    for (int i = 0; i < n; i++)
        words[i][strcspn(words[i], "\n")] = '\0';
    sortByLength(words, n);
    printf("Sorted by length:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);
    return 0;
}