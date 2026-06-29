#include <stdio.h>
int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    int i = 0, flag = 1;
    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag) printf("Equal");
    else printf("Not Equal");
    return 0;
}
