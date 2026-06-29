#include <stdio.h>
#include <string.h>
int main() {
    char str[200], old[100], new[100], result[300];
    scanf("%s %s %s", str, old, new);
    char *pos = strstr(str, old);
    if(pos != NULL) {
        int idx = pos - str;
        strncpy(result, str, idx);
        result[idx] = '\0';
        strcat(result, new);
        strcat(result, pos + strlen(old));
        printf("%s", result);
    } else {
        printf("Substring Not Found");
    }
    return 0;
}
