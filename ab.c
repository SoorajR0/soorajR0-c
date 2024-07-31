#include<stdio.h>
int main(){
    int n,o,r,d=0,c=0;
    printf("armstrong num between 1 to 1000 are:\n");
    for(n=1;n<=1000;n++){
        o=n;
        d=0;
        while(o!=0){
            r=o%10;
            d+=r*r*r;
            o/=10;
        }
        if (d==n){
           printf("%d",n);
           c++;
        }
    }
    printf("\n total armstrong numbers:%d\n",c);
    return 0;
}