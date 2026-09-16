# c-basics-
#include <stdio.h>
#include <conio.h>

void main()
{
    char name[50];
    clrscr();

    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("\nHello, Robotics!\n");
    printf("Welcome %s\n", name);

    getch();
}
