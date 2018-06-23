#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int A[n], k = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    for (int i = 1; i < n - 1; ++i) {
        if (A[i] > A[i - 1] && A[i] > A[i + 1] ) {
            ++k;
        }
    }
    printf("%d", k);
}
