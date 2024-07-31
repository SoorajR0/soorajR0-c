#include<stdio.h>
struct complex{
    float real;
    float imag;
};
int main(){
    struct complex a,b,c;
    printf("enter real and imaginary part of first complex num:");
    scanf("%f %f",&a.real,&a.imag);
    printf("enter real and imaginary parts of second complex num:");
    scanf("%f %f",&b.real,&b.imag);
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    printf("sum of complex num:%.2f+%.2f1\n",c.real,c.imag);
    return 0;
}