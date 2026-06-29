#include <stdio.h>
#include <string.h>
void reverse(char str[]) {
    int len = strlen(str);
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
int main() {
    char str[100];
    scanf("%s", str);
    reverse(str);
    return 0;
}
