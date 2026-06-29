#include <stdio.h>
#include <string.h>
int main() {
    char str[200], sub[100];
    scanf("%s %s", str, sub);
    if(strstr(str, sub) != NULL) printf("Substring Found");
    else printf("Substring Not Found");
    return 0;
}
