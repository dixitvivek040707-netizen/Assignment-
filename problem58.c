#include <stdio.h>
int sumDiagonal(int a[][10], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += a[i][i];
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[10][10];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("%d", sumDiagonal(a, n));
    return 0;
}
