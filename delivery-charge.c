#include<stdio.h>
void main()

{
    float distance, charge;

    printf("Enter delivery distance in km: ");
    scanf("%f",&distance);

    if(distance <= 5)
        charge = 30;
    else if(distance <= 15)
        charge = 60;
    else
        charge = 100;

    printf("Delivery Charge = %.2f",charge);

    
}