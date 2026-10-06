#include<stdio.h>


void main()
{
    float marks;

    

    printf("Enter percentage: ");
    scanf("%f",&marks);

    if(marks >= 75)
        printf("Result: Distinction");
    else if(marks >= 50)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    
}