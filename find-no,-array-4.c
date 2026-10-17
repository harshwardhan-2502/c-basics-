#include <stdio.h>
int main() 

{
    int arr[100];
    int n, i, search_key;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to find: ");
    scanf("%d", &search_key);

    for(i = 0; i < n; i++) {
        if(arr[i] == search_key) {
            printf("Found number %d at position %d!\n", search_key, i + 1);
            found = 1;
            break; // Stop looking once found
        }
    }

    if(found == 0) {
        printf("Number not found in the array.\n");
    }


}
