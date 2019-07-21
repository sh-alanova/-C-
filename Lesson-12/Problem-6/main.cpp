#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, res = 0;
    while(scanf("%d", &n) == 1) {
        res ^= n;
    } 
    printf("%d", res);
    return 0;
}
