#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) return 0;
    }
    return 1;
}
int reverse(int n) {
    int rev = 0;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    int n;
    scanf("%d", &n);
    int rev = reverse(n);
    if(isPrime(n) && isPrime(rev) && n != rev) printf("Emirp Number");
    else printf("Not Emirp Number");
    return 0;
}
