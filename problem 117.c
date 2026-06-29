#include <stdio.h>
#include <string.h>
int main() {
    char str[200], words[50][50];
    int i = 0, j = 0, k = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            words[k][j++] = str[i];
        } else {
            words[k][j] = '\0';
            k++; j = 0;
        }
        i++;
    }
    int n = k;
    for(int a = 0; a < n; a++) {
        for(int b = a+1; b < n; b++) {
            if(strcmp(words[a], words[b]) > 0) {
                char temp[50];
                strcpy(temp, words[a]);
                strcpy(words[a], words[b]);
                strcpy(words[b], temp);
            }
        }
    }
    for(int a = 0; a < n; a++) {
        printf("%s\n", words[a]);
    }
    return 0;
}
