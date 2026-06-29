#include <stdio.h>
void transpose(int a[][10], int r, int c) {
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[10][10];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    transpose(a, r, c);
    return 0;
}
