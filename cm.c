#include<stdio.h>
int main(){
    int n,o,r,d=0,a=0;
    printf("enter the num:");
    scanf("%d",&n);
    o=n;
    while(o!=0){
        o/=10;
        a++;
    }
    o=n;
    while(o!=0){
        r=o%10;
        d+=pow(r,a);
        o/=10;
    }
    if(d==n)
    printf("%d is an armstrong num.\n",n);
    else
    printf("%d is not an armstrong num.\n",n);
    return 0;
}