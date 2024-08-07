#include<stdio.h>
int main(){
    int l,u,n,i,isprime;
    printf("enter l limit:");
    scanf("%d",&l);
    printf("enter u mlimit:");
    scanf("%d",&u);
    printf("prime num between %d and %d are:\n",l,u);
    for(n=l;n<=n/2;n++){
        isprime=1;
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime&&n>1)
        printf("%d\n",n);
    }
    return 0;
}