#include<stdio.h>
int main(){
    int array[100],n,i,max;
    printf("enter the num of elements:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=1;i<n;i++){
        if(array[i]>max)
        max=array[i];
    }
    printf("maximum element:%d\n",max);
    return 0;
}