#include<stdio.h>
int main(){
    int n,o,r=0,remainder;
    printf("enter a num:");
    scanf("%d",&n);
    o=n;
    while(n!=0){
    remainder=n%10;
    r=r*10+remainder;
    n/=10;
    }
    if(o==r)
    printf("%d is a palindrome num.\n",o);
    else
    printf("%d is not a palindome num.\n",o);
    return 0;
}