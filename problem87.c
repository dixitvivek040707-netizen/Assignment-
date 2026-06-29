#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    long sq = (long)n * n;
    int digits = 0;
    long temp = sq;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    int div = pow(10, digits/2);
    int left = sq / div;
    int right = sq % div;
    if(left + right == n) printf("Kaprekar Number");
    else printf("Not Kaprekar Number");
    return 0;
}
