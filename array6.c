#include<stdio.h>
void findCommonElements(int arr1[], int arr2[], int n1, int n2) {
    int i, j, count;
    printf("Common elements: ");
    for (i = 0; i < n1; i++) {
        count = 0;
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                count++;
                break;
            }
        }
        if (count > 0)
            printf("%d ", arr1[i]);
    }
    printf("\n");
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
    findCommonElements(arr1, arr2, n1, n2);
    return 0;
}
