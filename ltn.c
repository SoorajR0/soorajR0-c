#include<stdio.h>
int main(){
    int s=2,o=4,r=6;
    printf("%d enter first num:",s);
    printf("%d enter second num:",o);
    printf("%d enter third num:",r);
    if(s>=o&&s>=r){
        printf("\n%d is the largest num",s);
    }
    else if(s>=o&&o>=r){
        printf("\n%d is the largest num",o);
    }
    else{
        printf("\n%d is the largest num",r);
    }
    return 0;
}