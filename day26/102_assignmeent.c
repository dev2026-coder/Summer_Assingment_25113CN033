#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible to vote.\n");
    else
        printf("Not eligible. Wait %d years.\n", 18 - age);
    return 0;
}