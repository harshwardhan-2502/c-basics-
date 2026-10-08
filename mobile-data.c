#include<stdio.h>
void main()

{
    float data, remaining;


    printf("Enter data used in GB: ");
    scanf("%f",&data);

    if(data <= 2)
        remaining = 10 - data;
    else if(data <= 6)
        remaining = 10 - data;
    else
        remaining = 0;

    printf("Remaining Data = %f     GB",remaining);


}