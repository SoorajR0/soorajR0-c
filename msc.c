#include<stdio.h>
int main(){
    int c;
    float a,b,d;
    printf("simple calculator\n'");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("enter your c(1-4):");
    scanf("%d",&c);
    printf("enter first num:");
    scanf("%f",&a);
    printf("enter second num:");
    scanf("%f",&b);
    switch(c){
        case 1:
        d=a+b;
        printf("%.2f+%.2f=%.2f\n",a,b,d);
        break;
        case 2:
        d=a-b;
        printf("%.2f-%.2f=%.2f\n",a,b,d);
        break;
        case 3:
        d=a*b;
        printf("%.2f*%.2f=%.2f\n",a,b,d);
        break;
        case 4:
        if(b!=0){
            d=a/b;
        printf("%.2f/%.2f=%.2f\n",a,b,c);
        }
        else{
            printf("error:division by zero!\n");
        }
        break;
        default:
        printf("invalid c!\n");
    }
    return 0;
}