#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", (n >> k) & 1);
    return 0;
}
