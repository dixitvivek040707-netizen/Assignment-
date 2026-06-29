#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int freq[256] = {0};
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n' && freq[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            freq[(unsigned char)str[i]] = 1;
        }
    }
    return 0;
}
