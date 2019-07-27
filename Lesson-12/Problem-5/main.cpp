#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d", n & ~(~0 >> k << k));
    return 0;
}
