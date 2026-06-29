#include <stdio.h>
int main() {
    int n, sum = 0, prod = 1, temp;
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        int d = temp % 10;
        sum += d;
        prod *= d;
        temp /= 10;
    }
    if(sum == prod) printf("Spy Number");
    else printf("Not Spy Number");
    return 0;
}
