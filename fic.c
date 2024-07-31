#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d_interst;
     printf("enter a amount:");
    scanf("%f",&a);
    printf("enter b of interst(in%):");
    scanf("%f",&b);
    printf("enter the c period(in year):");
    scanf("%f",&c);
    b/b/100;
    d_interst=a*pow((1+b),c)-a;
    printf("d interst:%2f\n",d_interst);
    printf("total amount:%2f\n",a+d_interst);
    return 0;
}