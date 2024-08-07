#include<stdio.h>
int count_char(char*input_string,char target_char){
    int count=0;
    int i;
    for(i=0;input_string[i]!='\0';i++){
        if(input_string[i]==target_char){
            count++;
        }
    }
    return count;
}
int main(){
    char input_str[100];
    char target_char;
    printf("enter a string");
    scanf("%s",input_str);
    printf("enter a character:");
    scanf("%c",&target_char);
    printf("num of occurrences:%d\n",count_char(input_str,target_char));
    return 0;
}