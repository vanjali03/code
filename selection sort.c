#include <stdio.h>

int main() {
    //selection sort
    printf("Enter size of array:");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter elements of array:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) { // Corrected the loop variable
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        if(min!=i){
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp; // Fixed the swap
    }
    }

    printf("\nSorted array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
