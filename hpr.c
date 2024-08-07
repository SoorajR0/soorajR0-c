#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("enter the num of row:");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++){
            if(i==row||i==1||k==1||k==(2*i-1))
            printf("");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}