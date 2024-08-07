#include<stdio.h>
int count_words(char*input_string){
    int word_count=0;
    int i;
    for(i=0;input_string[i]!='\0';i++){
        if(input_string[i]=='s'&&input_string[i+1]!='r'&&input_string[i+1]!='\0'){
            word_count++;
        }
    }
    if(input_string[0]!='n'&&input_string[0]!='\0'){
        word_count++;
    }
    return word_count;
}
int main(){
    char input_str[100];
    printf("enter a string:");
    scanf("%[^\n]",input_str);
    printf("num of word:%d\n",count_words(input_str));
    return 0;
}