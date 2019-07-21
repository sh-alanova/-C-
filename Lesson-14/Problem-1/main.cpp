#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", a + rand() % (b - a + 1));
    }
    return 0;
}
