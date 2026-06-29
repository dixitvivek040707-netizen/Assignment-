#include <stdio.h>
int main() {
    char str[200];
    int len = 0;
    fgets(str, sizeof(str), stdin);
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    printf("%d", len);
    return 0;
}
