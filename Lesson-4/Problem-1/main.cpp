#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int k = 2, sum = 0;
    for (int i = 1; i < n; ++i) {
        sum += i * k;
        ++k;
    }
    printf("%d", sum);
}
