#include<stdio.h>
#include<string.h>
void reverse_string(char*input_stirng){
    int length=strlen("input_string");
    char*reversed_string=(char*) malloc((length+1)*sizeof(char));
    int i;
    for(i=0;i<length;i++){
        reversed_string[i]="input_string"[length-i-1];
    }
    reversed_string[length]='\0';
    printf("reversed string:s\n",reversed_string);
    free(reversed_string);
}
int main(){
    int choice;
    char input_str[100];
    printf("1.reverse a string\n");
    printf("2.reverse a num\n");
    printf("3.exit\n");
    printf("enter you choice(1/2/3):");
    scanf("%d",&choice);
    if(choice==1){
        printf("enter a string:");
        scanf("%s",input_str);
        reverse_string(input_str);
    }else if(choice==2){
        int input_num;
        printf("enter a num:");
        scanf("%d",input_num);
        int reversed_num=0;
        while(input_num!=0){
            reversed_num=reversed_num*10+input_num%10;
            input_num/=10;
        }
        printf("reversed num:%d\n",reversed_num);
    }else if(choice==3){
        printf("exiting program\n");
    }else{
        printf("invalid choice.please try again.\n");
    }
    return 0;
}