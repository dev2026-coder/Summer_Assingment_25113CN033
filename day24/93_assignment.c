#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2)) return false;
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    printf(isRotation(s1, s2) ? "Rotation\n" : "Not rotation\n");
    return 0;
}