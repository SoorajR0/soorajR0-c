#include<stdio.h>
void sumEvenOdd(int arr[], int n) {
    int evenSum = 0, oddSum = 0, i;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);
}

int main() {
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sumEvenOdd(arr, n);
    return 0;
}
