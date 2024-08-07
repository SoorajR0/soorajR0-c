#include<stdio.h>
int main(){
    int arr[100],n,i,temp;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("original array:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[n-i-1]=temp;
    }
    printf("reversed array:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}