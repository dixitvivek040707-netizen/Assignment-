#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int freq[256] = {0};
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') freq[(unsigned char)str[i]]++;
    }
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 1) {
            printf("%c = %d\n", i, freq[i]);
        }
    }
    return 0;
}
