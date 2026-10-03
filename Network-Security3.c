#include<stdio.h>
void main()

{
    float score;

    clrscr();

    printf("Enter security access score: ");
    scanf("%f",&score);

    if(score < 30)
        printf("Access Denied");
    else if(score <= 70)
        printf("Limited Access");
    else
        printf("Full Access");

    getch();

}