#include<stdio.h>
int main(){
    int arr[100],n,i,max,secondMax;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    max=secondMax="int_min";
    for(i=0;i<n;i++){
        if(arr[i]>max){
            secondMax=max;
        }
        else
        if(arr[i]>secondMax&&arr[i]!=max){
            secondMax=arr[i];
        }
    }
    if(secondMax=="int_min")
    printf("No second largest element\n");
    else
    printf("second largest element:%d\n",secondMax);
    return 0;
}