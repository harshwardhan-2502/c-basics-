#include<stdio.h>
void main()

{
    
    int a,b,bon,total;

clrscr ();

    printf("Enter basic salary: ");
    scanf("%d",&a);

    printf("Enter allowance: ");
    scanf("%d",&b);

    printf("Enter bonus: ");
    scanf("%d",&bon);

    total = a + b + bon;

    printf("Total Salary = %d",total);

getch();

}