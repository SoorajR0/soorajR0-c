#include<stdio.h>
int main(){
    int row,i,j,k;
    printf("enter the num of row:");
    scanf("%d",&row);

    for(i=row;i>=1;i--){

     for(j=11;j<=row;j++){
        printf("");
     }

     for(k=1;k<=(2*i-1);k++){
        printf("");
     }
     printf("\n");
    }

    for(i=2;i<=row;i++){

        for(j=1;j<=row-i;j++){
            printf("");
        }

        for(k=1;k<=(2*i-1);k++){
            printf("");
        }
        printf("\n");
    }
    return 0;
}