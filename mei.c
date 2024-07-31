#include<stdio.h>
int main(){
    int array[100],n,max;
    printf("enter the num of element(1-100):");
    scanf("%d,&n");
    printf("enter %d integers:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("maximum element:%d\n",max);
    return 0;
}