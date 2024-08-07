#include<stdio.h>
#include<stdio.h>
int is_palindrome_string(char*input_string){
    int length=strlen(input_string);
    int i;
    for(i=0;i<length/2;i++){
    if(input_string[i]!=input_string[length-i-1]){
        return 0;
    }
   }
   return 1;
}
int is_palindrome_num(int input_num){
    int reversed_num=0;
    int original_num=input_num;

    while(input_num!=0){
      reversed_num=reversed_num*10+input_num%10;
    }
    return(original_num==reversed_num);
}
int main(){
    int choice;
    char input_str[100];
    printf("1.check if a string is a palindrome\n");
    printf("2.check if a num is a palindrme\n");
    printf("3.exit\n");
    printf("enter your choice(1/2/3):");
    scanf("%d",&choice);
    if(choice==1){
        printf("enter a string:");
        scanf("%s",input_str);
        if(is_palindrome_string(input_str)){
            printf("%s is a palindrome\n",input_str);
        }
    }else if(choice==2){
        int input_num;
        printf("enter a num:");
        scanf("%d",&input_num);
        if(is_palindrome_num(input_num)){
            printf("%d is a palindrome\n",input_num);
        }else{
            printf("%d is not a palindrome\n",input_num);
        }
    }else if(choice==3){
        printf("exiting program\n");
    }else{
        printf("invalid choice. please try again.\n");
    }
    return 0;
}