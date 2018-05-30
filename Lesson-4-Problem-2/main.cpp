#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int A[n], k = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (A[i] == 0) {
            ++k;
        }
    }
    printf("%d", k);
}
