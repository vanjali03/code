#include <stdio.h>

int main() {
    //insertion sort
    printf("Enter size of array:");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter elements of array:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<n;i++){
        int temp=arr[i];
       int j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("\nSorted array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
