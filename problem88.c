#include <stdio.h>
int sumDiv(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) sum += i;
    }
    return sum;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sumA = sumDiv(a);
    int sumB = sumDiv(b);
    if(sumA / a == sumB / b) printf("Friendly Pair");
    else printf("Not Friendly Pair");
    return 0;
}
