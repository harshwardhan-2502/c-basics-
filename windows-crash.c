#include<stdio.h>
void main()

{
    float speed;

    clrscr();

    printf("Enter speed of processor: ");
    scanf("%f",&speed);

    if(speed < 40)
        printf("System will be crashed");
    
    else if(speed <= 60)
        printf("System is slow");
    
    else
        printf("System is normal");

    getch();

}
