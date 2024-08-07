#include<stdio.h>
#include<ctype.h>
void count_vowels_consonants(char*input_string){
    int vowel_count=0;
    int consonant_count=0;
    int i;
    for(i=0;input_string[i]!='\0';i++){
    if(isalpha(input_string[i])){
        char lower_case_letter=tolower(input_string[i]);
        if(lower_case_letter=='a'||lower_case_letter=='e'||lower_case_letter=='i'||lower_case_letter=='o'||lower_case_letter=='u'){
            vowel_count++;
        }else{
            consonant_count++;
            }
        }
    }
    printf("vowels:%d\n",vowel_count);
    printf("consonant:%d\n",consonant_count);
}
int main(){
    char input_str[100];
    printf("enter a string:");
    scanf("%s",input_str);
    count_vowels_consonants(input_str);
    return 0;
}