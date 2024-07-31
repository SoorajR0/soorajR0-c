#include<stdio.h>
int main(){
    int a,b,m,lcm;
    printf("enter the first num:");
    scanf("%d",&a); 
    printf("enter the second num:");
    scanf("%d",&b);
    m=(a>b)?a:b;
    while(1){
        if(m%a==0&&m%b==0){
            lcm=m;
            break;
        }
        ++m;
    }
    printf("lcm of %d and %d is:%d\n",a,b,lcm);
    return 0;
}