#include <stdio.h>
void subtractMatrix(int a[][10], int b[][10], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[10][10], b[10][10];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    subtractMatrix(a, b, r, c);
    return 0;
}
