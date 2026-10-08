#include<stdio.h>
void main()

{
    float hours, fee;


    printf("Enter parking hours: ");
    scanf("%f",&hours);

    if(hours <= 2)
        fee = 20;
    else if(hours <= 5)
        fee = 20 + (hours - 2) * 10;
    else
        fee = 50 + (hours - 5) * 15;

    printf("Parking Fee = %.2f",fee);

}