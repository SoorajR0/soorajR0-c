#include<stdio.h>
int main(){
    char s;
printf("enter a character :");
scanf("%c",&s);
if(s=='a'|| s=='e' || s=='i'|| s=='o' || s=='u'){
printf("the entered caharcter is an vowel");
}
else{
printf("the entered char is consonant");
}
}