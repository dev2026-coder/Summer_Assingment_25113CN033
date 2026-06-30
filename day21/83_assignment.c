#include <stdio.h>
#include <ctype.h>  // for tolower()

void countVowelsConsonants(char str[], int *vowels, int *consonants) {
    *vowels = *consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

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

    countVowelsConsonants(str, &vowels, &consonants);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}