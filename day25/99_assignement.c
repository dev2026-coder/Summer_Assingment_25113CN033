#include <stdio.h>
#include <string.h>

#define MAX 100
#define LEN 50

void sortNames(char names[][LEN], int n) {
    char temp[LEN];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
}

int main() {
    char names[MAX][LEN];
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // consume newline
    printf("Enter names:\n");
    for (int i = 0; i < n; i++)
        fgets(names[i], LEN, stdin);
    // remove newlines
    for (int i = 0; i < n; i++)
        names[i][strcspn(names[i], "\n")] = '\0';
    sortNames(names, n);
    printf("Sorted names:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);
    return 0;
}