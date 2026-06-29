#include <stdio.h>
int main() {
    int n, sum = 0, temp;
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if(n % sum == 0) printf("Harshad Number");
    else printf("Not Harshad Number");
    return 0;
}
