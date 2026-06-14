#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    printf("%s", str);
    return 0;
}
