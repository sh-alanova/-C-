#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int k = 0; k < n; ++k) {
        for(int i = k; i < n ; ++i) {
            int j = i - k;
            arr[i][j] = k;
        }
        for(int j = k; j < n ; ++j) {
            int i = j - k;
            arr[i][j] = k;
        }
    }
    for(int i = 0; i < n ; ++i) {
        for(int j = 0; j < n ; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
