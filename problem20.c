#include <stdio.h>
#include <math.h>
int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    printf("%d", (int)pow(base, exp));
    return 0;
}
