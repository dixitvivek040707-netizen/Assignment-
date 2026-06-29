#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for(int i = 0; i < len-1; i++) {
        for(int j = i+1; j < len; j++) {
            if(str[i] > str[j] && str[j] != '\n') {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for(int i = 0; i < len; i++) {
        if(str[i] != '\n') printf("%c", str[i]);
    }
    return 0;
}
