#include <stdio.h>

int main() {
    int m, n;
    scanf("%d\n%d", &m, &n);
    int day = (m + n - 1) / m;
    printf("%d", day);
}

