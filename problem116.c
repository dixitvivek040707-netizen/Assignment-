#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    scanf("%s", word);
    char *pos = str;
    while((pos = strstr(pos, word)) != NULL) {
        count++;
        pos += strlen(word);
    }
    printf("%d", count);
    return 0;
}
