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
        for(int j = 0; j < k; ++j) {
            int s = j + rand() % (k);
            int tmp = a[j];
            a[j] = a[s];
            a[s] = tmp;
        }
        for(int p = 0; p < k; ++p) {
            printf("%d ", a[p]);
        }
        printf("\n");
    }
    return 0;
}
