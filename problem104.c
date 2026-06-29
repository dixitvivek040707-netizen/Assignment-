#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] == ' ' || str[i] == '\n') && str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
            count++;
        }
    }
    if(str[0] != ' ' && str[0] != '\n') count++;
    printf("%d", count);
    return 0;
}
