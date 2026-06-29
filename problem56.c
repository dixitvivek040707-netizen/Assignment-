#include <stdio.h>
int search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}
int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    int pos = search(arr, n, key);
    if(pos != -1) printf("Found at index %d", pos);
    else printf("Not Found");
    return 0;
}
