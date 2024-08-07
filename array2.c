#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n; 
    int temp[k], i;
    for (i = 0; i < k; i++)
        temp[i] = arr[n - k + i];
    for (i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];
    for (i = 0; i < k; i++)
        arr[i] = temp[i];
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100], n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    printf("Original array: ");
    printArray(arr, n);
    rotateArray(arr, n, k);
    printf("Rotated array: ");
    printArray(arr, n);
    return 0;
}