#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int bit[32];
    for(int i = 0; i < 32; ++i) {
        bit[i] = (n >> i) & 1;
    }
    printf("%d\n", bit[k]);
    return 0;
}
