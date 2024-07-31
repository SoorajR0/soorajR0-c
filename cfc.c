#include<stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("entertemperature in fahrenheit:");
    scanf("%f",fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%2f degrees fahrenheit is equal to %.2f degrees celsius\n",fahrenheit,celsius);
    return 0;
}