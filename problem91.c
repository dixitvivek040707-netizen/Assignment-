#include <stdio.h>
int sumDigits(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    int temp = n, sum1 = sumDigits(n), sum2 = 0;
    for(int i = 2; i <= temp; i++) {
        while(temp % i == 0) {
            sum2 += sumDigits(i);
            temp /= i;
        }
    }
    if(sum1 == sum2) printf("Smith Number");
    else printf("Not Smith Number");
    return 0;
}
