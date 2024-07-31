#include<stdio.h>
int main(){
    int n,reversed=0,remainder;
    printf("enter the num:");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }
    printf("resversed num:%d\n",reversed);
    return 0;
}