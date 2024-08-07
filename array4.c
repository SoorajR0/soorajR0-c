#include <stdio.h>
void rightRotateArray(int arr[], int n, int k) {
    k = k % n;
    int temp[n - k], i;
    for (i = 0; i < n - k; i++)
        temp[i] = arr[i];
        for (i = 0; i < k; i++)
        arr[i] = arr[n - k + i];
        for (i = 0; i < n - k; i++)
        arr[k + i] = temp[i];
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
    printf("Enter the number of positions to right rotate: ");
    scanf("%d", &k);
    printf("Original array: ");
    printArray(arr, n);
    rightRotateArray(arr, n, k);
    printf("Right rotated array: ");
    printArray(arr, n);
    return 0;
}
