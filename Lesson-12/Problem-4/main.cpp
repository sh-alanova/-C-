#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", n & ~((int)pow(2, k)));
    return 0;
}
