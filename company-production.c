#include<stdio.h>
void main()

{
    int p,c,a,total;

    clrscr();

    printf("Enter components per cycle: ");
    scanf("%d",&p);

    printf("Enter number of cycles: ");
    scanf("%d",&c);

    printf("Enter additional components: ");
    scanf("%d",&a);

    total = (p * c) + a;

    printf("\nTotal Components Produced = %d",total);

    getch();

}