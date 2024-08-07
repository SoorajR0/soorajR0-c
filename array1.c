#include<stdio.h>
void countfrequency(int arr[],int n){
    int i,j,count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            count++;
        }
        printf("frequency of %d\n",arr[i],count);
    }
}
int main(){
    int arr[100],n,i;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    countfrequency(arr,n);
    return 0;
}