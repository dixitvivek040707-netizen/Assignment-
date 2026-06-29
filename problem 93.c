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
int isPalindrome(int n) {
    int temp = n, rev = 0;
    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}
int main() {
    int n;
    scanf("%d", &n);
    if(isPrime(n) && isPalindrome(n)) printf("Prime Palindrome");
    else printf("Not Prime Palindrome");
    return 0;
}
