#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("enter the num of row:");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-1;j++){
        printf(" ");
    }
    for(k=1;k<=(2*i-1);k++){
        if(i==row||k==1||k==(2*i-1))
        printf("");
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}