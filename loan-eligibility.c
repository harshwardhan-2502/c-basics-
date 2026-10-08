#include<stdio.h>
void main()
{
    float income, age;


    printf("Enter monthly income: ");
    scanf("%f",&income);

    printf("Enter age: ");
    scanf("%f",&age);

    if(income >= 50000 && age >= 21)
        printf("Loan Eligibility: Approved");
    else if(income >= 25000 && age >= 21)
        printf("Loan Eligibility: Review Required");
    else
        printf("Loan Eligibility: Not Eligible");

    
}