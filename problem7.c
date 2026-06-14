#include <stdio.h>

int main() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        product = 0; 
    } else {
        while(num != 0) {
            product *= (num % 10);
            num = num / 10;         
        }
    }

    printf("Product of digits = %d\n", product);
    return 0;
}
