#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int bit[32];
    for(int i = 31; i >= 0; --i) {
        bit[i] = (n >> i) & 1;
    }
    bit[k] = 0;
    int res = 0;
    for(int i = 31; i >= 0; --i) {
        res += bit[i] * pow(2, i);
    }
    printf("%d\n", res);
    return 0;
}
