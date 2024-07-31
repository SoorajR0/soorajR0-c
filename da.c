#include<stdio.h>
#include<math.h>
int main(){
    int l,u,n,o,r,d=0,a=0;
    printf("enter l limit:");
    scanf("%d",&u);
    printf("armstrong num between %d and %d are:\n",l,u);
    for(n=l;n<=u;n++){
        o=n;
        d=0;
        a=0;
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
        printf("%d\n",n);
    }
    return 0;
}