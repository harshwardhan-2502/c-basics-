#include <stdio.h>
int main()

{
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring array of size n

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("\nSum of elements = %.2f", sum);
    printf("\nAverage of elements = %.2f\n", average);

    
}
