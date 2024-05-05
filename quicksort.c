#include <stdio.h>

int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end) {
        while (arr[start] <= pivot) {
            start++;
        }
        while (arr[end] > pivot) {
            end--;
        }
        if (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    arr[lb] = arr[end];
    arr[end] = pivot;
    return end;
}

void quicksort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}

int main() {
    // quick sort
    printf("Enter size of array:");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter elements of array:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n - 1);
    printf("\nSorted array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
