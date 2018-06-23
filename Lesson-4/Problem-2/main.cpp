#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int arrey[n], zero = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arrey[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (arrey[i] == 0) {
            ++zero;
        }
    }
    printf("%d", zero);
}
