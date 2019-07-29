#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long a, b;
    scanf("%d%lld%lld", &n, &a, &b);
    for (int i = 0; i < n; ++i) {
        long long long_rand = (long long)rand() + (((long long)rand()) << 31);
        long_rand = a + long_rand % (b - a + 1);
        printf("%lld\n", long_rand);
    }
    return 0;
}
