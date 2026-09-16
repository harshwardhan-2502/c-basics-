/*
 * Experiment 1: Display "Hello, Robotics!" with Student Name Input
 * Turbo C / Turbo C++ compatible C program
 */

#include <stdio.h>
#include <conio.h>

void main()
{
    char name[50];

    clrscr();

    printf("Enter your name: ");
    gets(name);

    printf("\nHello, Robotics!\n");
    printf("Student Name: %s", name);

    getch();
}
