#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("=== Simple Quiz Application ===\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1) Mumbai  2) Delhi  3) Kolkata  4) Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    // Question 2
    printf("\n2. Which is the largest planet?\n");
    printf("1) Earth  2) Mars  3) Jupiter  4) Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
        score++;

    // Question 3
    printf("\n3. Which language is used for system programming?\n");
    printf("1) Python  2) C  3) Java  4) HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("\n=== Quiz Finished ===\n");
    printf("Your Score: %d / 3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good job!\n");
    else
        printf("Try again!\n");

    return 0;
}