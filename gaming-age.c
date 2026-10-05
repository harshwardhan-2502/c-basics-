#include <stdio.h>

int main() {
   int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Access Granted! Enjoy the game.\n");
    } else {
        printf("Access Denied. You are too young.\n");
    }

    
}
