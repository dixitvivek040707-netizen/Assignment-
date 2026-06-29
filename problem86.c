#include <stdio.h>
int main() {
    char num[100];
    int flag = 0;
    scanf("%s", num);
    for(int i = 1; num[i] != '\0'; i++) {
        if(num[i] == '0') {
            flag = 1;
            break;
        }
    }
    if(flag) printf("Duck Number");
    else printf("Not Duck Number");
    return 0;
}
