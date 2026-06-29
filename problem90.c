#include <stdio.h>
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(gcd(x, y) == 1) printf("Co-Prime");
    else printf("Not Co-Prime");
    return 0;
}
