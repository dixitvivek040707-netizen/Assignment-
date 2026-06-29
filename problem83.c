#include <stdio.h>
int main() {
    int n, sq;
    scanf("%d", &n);
    sq = n * n;
    int temp = n;
    int flag = 1;
    while(temp > 0) {
        if(temp % 10 != sq % 10) {
            flag = 0;
            break;
        }
        temp /= 10;
        sq /= 10;
    }
    if(flag) printf("Automorphic Number");
    else printf("Not Automorphic Number");
    return 0;
}
