#include<stdio.h>
void main()

{
    float temperature;


    printf("Enter CPU temperature: ");
    scanf("%f",&temperature);

    if(temperature < 50)
        printf("System operating at optimal temperature");
    else if(temperature <= 75)
        printf("System operating at elevated temperature");
    else
        printf("Thermal warning: System overheating");

    
}