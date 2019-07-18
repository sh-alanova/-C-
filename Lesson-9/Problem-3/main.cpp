#include <stdio.h>
#include <stdlib.h>

int max(int * a, int n) {
    int max = a[0];
    for(int i = 1; i < n; ++i) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int * a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("%d\n", max(a, n));
    return 0;
}
