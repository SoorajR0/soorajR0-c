#include<stdio.h>
int main(){
    int arr[100],n,i,j,temp;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("oringinal array:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+i]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}