#include<stdio.h>

void main()

{
    
   int a,b,total;

   printf("Enter initial battery percentage:");
   scanf("%d",&a);

   printf("Enter charged percentage: ");
   scanf("%d",&b);

    total = a + b;

 printf("Final Battery Percentage = %d",total);

    
}