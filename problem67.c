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
    printf("%d", gcd(x, y));
    return 0;
}
