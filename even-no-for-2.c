#include<stdio.h>
void main()

{
    int i,n;

    printf("Enter limit: ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2)
    {
        printf("%d ",i);
    }

    
}