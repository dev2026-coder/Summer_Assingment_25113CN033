#include <stdio.h>

int main() {
    int choice;
    float a, b;
    do {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }
        switch (choice) {
            case 1: printf("%.2f + %.2f = %.2f\n", a, b, a+b); break;
            case 2: printf("%.2f - %.2f = %.2f\n", a, b, a-b); break;
            case 3: printf("%.2f * %.2f = %.2f\n", a, b, a*b); break;
            case 4: if (b != 0) printf("%.2f / %.2f = %.2f\n", a, b, a/b);
                    else printf("Division by zero.\n"); break;
            case 5: printf("Goodbye.\n"); break;
            default: printf("Invalid.\n");
        }
    } while (choice != 5);
    return 0;
}