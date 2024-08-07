#include <stdio.h>
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void unionOfArrays(int arr1[], int arr2[], int n1, int n2) {
    int i, j, count, k = 0;
    int unionArr[n1 + n2];
    for (i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        count = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j])
                count++;
        }
        if (count == 0)
            unionArr[k++] = arr2[i];
    }
    printf("Union: ");
    printArray(unionArr, k);
}
void intersectionOfArrays(int arr1[], int arr2[], int n1, int n2) {
    int i, j, count, k = 0;
    int intersectionArr[n1];
    for (i = 0; i < n1; i++) {
        count = 0;
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j])
                count++;
        }
        if (count > 0)
            intersectionArr[k++] = arr1[i];
    }
    printf("Intersection: ");
    printArray(intersectionArr, k);
}
int main() {
    int arr1[100], arr2[100], n1, n2, i;
    printf("Enter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("Enter the elements of array 1: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n2);
    printf("Enter the elements of array 2: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    unionOfArrays(arr1, arr2, n1, n2);
    intersectionOfArrays(arr1, arr2, n1, n2);
    return 0;
}