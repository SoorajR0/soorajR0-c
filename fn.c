#include<stdio.h>
int main(){
    int n,f=1;
    printf("enter a positive integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f*=i;
    }
    printf("f of %d:%d\n",n,f);
    return 0;
}