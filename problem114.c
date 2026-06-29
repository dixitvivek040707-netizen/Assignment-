#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], shortest[50];
    int i = 0, j = 0, minLen = 999;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if(strlen(word) < minLen && strlen(word) > 0) {
                minLen = strlen(word);
                strcpy(shortest, word);
            }
            j = 0;
        }
        i++;
    }
    printf("%s", shortest);
    return 0;
}
