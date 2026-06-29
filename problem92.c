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
    int sum = n;
    while(sum > 9) {
        sum = sumDigits(sum);
    }
    if(sum == 1) printf("Magic Number");
    else printf("Not Magic Number");
    return 0;
}
