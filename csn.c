#include<stdio.h>
int main(){
    int n,s=0;
    printf("enter a positive integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    s+= i;
    }
    printf("sum of natural numbers from 1 to %d:%d\n",n,s);
    return 0;
}