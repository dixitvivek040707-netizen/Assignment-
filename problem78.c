#include <stdio.h>
int isPrime(int n) {
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i*i <= n; i += 2) {
        if(n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    for(int i = start; i <= end; i++) {
        if(isPrime(i)) printf("%d ", i);
    }
    return 0;
}
