#include<stdio.h>
int main(){
    int n,i,isprime=1;
    printf("enter the num:");
    scanf("%d",&n);
    if(n<=1){
        printf("%d is not prime num.\n",n);
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime)
        printf("%d is a prime num.\n",n);
        else
        printf("%d is not a prime num.\n",n);
    }
    return 0; 
}