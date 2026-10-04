#include<stdio.h>
void main()

{
    float health;

    printf("Enter battery health percentage: ");
    scanf("%f",&health);

    if(health < 30)
        printf("Battery Status: Critical");
    else if(health <= 70)
        printf("Battery Status: Average");
    else
        printf("Battery Status: Healthy");

    
}
