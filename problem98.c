#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            printf("%c", str[i]);
        }
    }
    return 0;
}
