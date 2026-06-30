#include <stdio.h>
#include <string.h>

#define MAX 100
#define TITLE_LEN 50
#define AUTHOR_LEN 50

struct Book {
    int id;
    char title[TITLE_LEN];
    char author[AUTHOR_LEN];
    int available; // 1 = available, 0 = borrowed
};

int count = 0;
struct Book library[MAX];

void addBook();
void displayAll();
void searchByTitle();
void borrowBook();
void returnBook();

int main() {
    int choice;
    do {
        printf("\n=== MINI LIBRARY SYSTEM ===\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search by Title\n");
        printf("4. Borrow Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayAll(); break;
            case 3: searchByTitle(); break;
            case 4: borrowBook(); break;
            case 5: returnBook(); break;
            case 6: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 6);
    return 0;
}

void addBook() {
    if (count >= MAX) {
        printf("Library full!\n");
        return;
    }
    struct Book *b = &library[count];
    printf("Enter book ID: ");
    scanf("%d", &b->id);
    printf("Enter title: ");
    scanf("%s", b->title);
    printf("Enter author: ");
    scanf("%s", b->author);
    b->available = 1;
    count++;
    printf("Book added.\n");
}

void displayAll() {
    if (count == 0) {
        printf("No books.\n");
        return;
    }
    printf("\n%-5s %-30s %-20s %-10s\n", "ID", "Title", "Author", "Status");
    for (int i = 0; i < count; i++) {
        struct Book *b = &library[i];
        printf("%-5d %-30s %-20s %-10s\n", b->id, b->title, b->author,
               b->available ? "Available" : "Borrowed");
    }
}

void searchByTitle() {
    char title[TITLE_LEN];
    printf("Enter title: ");
    scanf("%s", title);
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, title) == 0) {
            struct Book *b = &library[i];
            printf("ID: %d, Author: %s, Status: %s\n",
                   b->id, b->author, b->available ? "Available" : "Borrowed");
            return;
        }
    }
    printf("Book not found.\n");
}

void borrowBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].available) {
                library[i].available = 0;
                printf("Book borrowed successfully.\n");
            } else {
                printf("Book already borrowed.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

void returnBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (!library[i].available) {
                library[i].available = 1;
                printf("Book returned successfully.\n");
            } else {
                printf("Book was not borrowed.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}