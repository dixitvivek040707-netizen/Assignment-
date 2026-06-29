#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    scanf("%s %s", str1, str2);
    for(int i = 0; str1[i] != '\0'; i++) freq1[(unsigned char)str1[i]]++;
    for(int i = 0; str2[i] != '\0'; i++) freq2[(unsigned char)str2[i]]++;
    int flag = 1;
    for(int i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Anagram");
    else printf("Not Anagram");
    return 0;
}
