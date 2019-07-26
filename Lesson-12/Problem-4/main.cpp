#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", n & ~(1 << k));
    return 0;
}

