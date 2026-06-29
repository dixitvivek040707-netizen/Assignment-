#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int n;
    scanf("%d", &n);
    if(isArmstrong(n)) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
