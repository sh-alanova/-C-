#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int res = n >> k << k;
    printf("%d\n", res);
    return 0;
}
