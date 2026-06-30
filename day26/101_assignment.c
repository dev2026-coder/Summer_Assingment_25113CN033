#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess, attempts = 0;
    printf("Guess a number (1-100):\n");
    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > target) printf("Too high!\n");
        else if (guess < target) printf("Too low!\n");
    } while (guess != target);
    printf("Correct! Attempts: %d\n", attempts);
    return 0;
}