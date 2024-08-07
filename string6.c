#include <stdio.h>
#include <string.h>
void findSubstring(char str[], char substr[]) {
    int len = strlen(str);
    int subLen = strlen(substr);
    int i, j, found = 0;
    for (i = 0; i <= len - subLen; i++) {
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != substr[j])
                break;
        }
        if (j == subLen) {
            printf("Substring found at position %d\n", i + 1);
            found = 1;
        }
    }
    if (!found)
        printf("Substring not found\n");
}
int main() {
    char str[100], substr[100];
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the substring: ");
    scanf("%s", substr);
    findSubstring(str, substr);
    return 0;
}
