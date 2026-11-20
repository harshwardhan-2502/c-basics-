
#include <stdio.h>

int main() 

{
    int arr[5];
    int i, sum = 0;

    printf("Enter 5 elements:\n");

    
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("\nArray elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    
    printf("\n\nSum = %d", sum);
    printf("\nAverage = %.2f", sum / 5.0);

    return 0;
}
