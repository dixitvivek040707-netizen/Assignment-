#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int digits = 0, alphabets = 0, special = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= '0' && str[i] <= '9')) digits++;
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) alphabets++;
        else if(str[i] != '\n') special++;
    }
    printf("Digits=%d Alphabets=%d Special=%d", digits, alphabets, special);
    return 0;
}
