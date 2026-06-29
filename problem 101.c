#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", tolower(str[i]));
    }
    return 0;
}
