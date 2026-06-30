#include <stdio.h>

#define MAX 100
int arr[MAX], size = 0;

void display() {
    if (size == 0) { printf("Empty.\n"); return; }
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int choice, pos, val;
    do {
        printf("\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Position (0-based) and value: ");
                scanf("%d %d", &pos, &val);
                if (pos < 0 || pos > size || size >= MAX) { printf("Invalid.\n"); break; }
                for (int i = size; i > pos; i--) arr[i] = arr[i-1];
                arr[pos] = val; size++;
                break;
            case 2:
                printf("Position to delete: ");
                scanf("%d", &pos);
                if (pos < 0 || pos >= size) { printf("Invalid.\n"); break; }
                for (int i = pos; i < size-1; i++) arr[i] = arr[i+1];
                size--;
                break;
            case 3:
                printf("Value to search: ");
                scanf("%d", &val);
                for (int i = 0; i < size; i++)
                    if (arr[i] == val) { printf("Found at %d\n", i); break; }
                break;
            case 4: display(); break;
            case 5: break;
            default: printf("Invalid.\n");
        }
    } while (choice != 5);
    return 0;
}