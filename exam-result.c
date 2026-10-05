#include <stdio.h>

int main() {
    float score;

    printf("Enter your score (0-100): ");
    scanf("%f", &score);

    if (score >= 50) {
        printf("Congratulations! You Passed.\n");
    } else {
        printf("Sorry, you Failed.\n");
    }

   
}
