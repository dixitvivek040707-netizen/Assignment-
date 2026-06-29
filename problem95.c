#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str), flag = 1;
    for(int i = 0; i < len/2; i++) {
        if(tolower(str[i]) != tolower(str[len - i - 1])) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
