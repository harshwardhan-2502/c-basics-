#include<stdio.h>
void main()

{
    float units, rate, bill;


    printf("Enter electricity units: ");
    scanf("%f",&units);

    if(units <= 100)
        rate = 3.5;
    else if(units <= 300)
        rate = 5.0;
    else
        rate = 7.0;

    bill = units * rate;

    printf("Applicable Rate = %.2f",rate);
    printf("\nElectricity Bill = %.2f",bill);

    
}