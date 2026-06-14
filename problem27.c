#include <stdio.h>
int main() {
    int n, key, low, high, mid, found = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    low = 0; high = n-1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            printf("Found at index %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if(found == 0) printf("Not Found");
    return 0;
}
