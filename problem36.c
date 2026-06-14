#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str), flag = 0;
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
