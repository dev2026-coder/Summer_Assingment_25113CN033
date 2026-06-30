#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n, choice;
    printf("Number of contacts: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Name, Phone: ");
        scanf("%s %s", contacts[i].name, contacts[i].phone);
    }
    do {
        printf("\n1. Display All\n2. Search by Name\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            for (int i = 0; i < n; i++)
                printf("%s -> %s\n", contacts[i].name, contacts[i].phone);
        } else if (choice == 2) {
            char name[50];
            printf("Enter name: ");
            scanf("%s", name);
            for (int i = 0; i < n; i++)
                if (strcmp(contacts[i].name, name) == 0)
                    printf("%s -> %s\n", contacts[i].name, contacts[i].phone);
        }
    } while (choice != 3);
    return 0;
}