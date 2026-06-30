#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int available;
};

int main() {
    struct Book books[100];
    int n, choice;
    printf("Number of books: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("ID, Title, Author, Available(1/0): ");
        scanf("%d %s %s %d", &books[i].id, books[i].title, books[i].author, &books[i].available);
    }
    do {
        printf("\n1. List Books\n2. Borrow (set available=0)\n3. Return (set available=1)\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            for (int i = 0; i < n; i++)
                printf("%d %s by %s - %s\n", books[i].id, books[i].title, books[i].author,
                       books[i].available ? "Available" : "Borrowed");
        } else if (choice == 2 || choice == 3) {
            int id;
            printf("Enter book ID: ");
            scanf("%d", &id);
            for (int i = 0; i < n; i++) {
                if (books[i].id == id) {
                    if (choice == 2) {
                        if (books[i].available) books[i].available = 0;
                        else printf("Already borrowed.\n");
                    } else {
                        if (!books[i].available) books[i].available = 1;
                        else printf("Already available.\n");
                    }
                    break;
                }
            }
        }
    } while (choice != 4);
    return 0;
}