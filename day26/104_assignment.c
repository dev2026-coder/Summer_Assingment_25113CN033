#include <stdio.h>
#include <string.h>

int main() {
    char answers[3][20] = {"Paris", "Mars", "Pacific"};
    char userAns[20];
    int score = 0;
    printf("Q1: Capital of France? ");
    scanf("%s", userAns);
    if (strcmp(userAns, answers[0]) == 0) score++;
    printf("Q2: Red planet? ");
    scanf("%s", userAns);
    if (strcmp(userAns, answers[1]) == 0) score++;
    printf("Q3: Largest ocean? ");
    scanf("%s", userAns);
    if (strcmp(userAns, answers[2]) == 0) score++;
    printf("Score: %d/3\n", score);
    return 0;
}