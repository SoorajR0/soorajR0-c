#include<stdio.h>
int main(){
    int array[100],n,sum=0;
    printf("enter the num of element(1-100):");
    scanf("%d",&n);
    printf("enter %d integer:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("sum of all elements:%d\n",sum);
    return 0;
}