#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[k];
    for(int i = 0; i < k; ++i) {
        a[i] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        int count = rand() % k;
        for(int j = 0; j < count; ++j) {
            int g = rand() % k;
            int tmp = a[j];
            a[j] = a[g];
            a[g] = tmp;
        }
        for(int i = 0; i < k; ++i) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
