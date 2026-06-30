#include <stdio.h>

int main() {
    int seats[50] = {0};
    int choice, seat;
    do {
        printf("\n1. View Seats\n2. Book Seat\n3. Cancel Booking\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            for (int i = 0; i < 50; i++) {
                if (i % 10 == 0) printf("\n");
                printf("%c ", seats[i] ? 'X' : 'O');
            }
            printf("\n");
        } else if (choice == 2 || choice == 3) {
            printf("Enter seat number (1-50): ");
            scanf("%d", &seat);
            if (seat < 1 || seat > 50) { printf("Invalid.\n"); continue; }
            if (choice == 2 && !seats[seat-1]) { seats[seat-1] = 1; printf("Booked.\n"); }
            else if (choice == 3 && seats[seat-1]) { seats[seat-1] = 0; printf("Cancelled.\n"); }
            else printf("Seat not available or already.\n");
        }
    } while (choice != 4);
    return 0;
}