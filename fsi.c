#include<stdio.h>
int main(){
    float a,rate,time,interst;
    printf("enter a amount:");
    scanf("%f",&a);
    printf("enter rate of interst(in%):");
    scanf("%f",&rate);
    printf("enter the time period(in year):");
    scanf("%f",&time);
    interst=(a*rate*time)/100;
    printf("simple interst:%2f\n",interst);
    printf("total amount:%2f\n",a,interst);
    return 0;
}