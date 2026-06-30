#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int choice;
    do {
        printf("\n1. Length\n2. Reverse\n3. Palindrome\n4. Uppercase\n5. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Enter string: ");
            scanf("%s", str);
        }
        switch (choice) {
            case 1: printf("Length: %lu\n", strlen(str)); break;
            case 2: strcpy(temp, str); strrev(temp); printf("Reverse: %s\n", temp); break;
            case 3: strcpy(temp, str); strrev(temp);
                    printf("%s\n", strcmp(str, temp) == 0 ? "Palindrome" : "Not palindrome"); break;
            case 4: for (int i = 0; str[i]; i++) str[i] = toupper(str[i]);
                    printf("Uppercase: %s\n", str); break;
            case 5: break;
            default: printf("Invalid.\n");
        }
    } while (choice != 5);
    return 0;
}