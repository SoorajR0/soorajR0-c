#include<stdio.h>
int main(){
    int a;
    printf("enter a positive integer:");
    scanf("%d",&a);
    printf("multication table of %d:\n",a);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}