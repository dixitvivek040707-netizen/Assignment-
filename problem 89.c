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
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(isPrime(a) && isPrime(b) && (abs(a - b) == 2))
        printf("Twin Primes");
    else
        printf("Not Twin Primes");
    return 0;
}
