#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    double a, b;
    scanf("%d%lf%lf", &n, &a, &b);
    double s = (b - a) / RAND_MAX;
    for (int i = 0; i < n; ++i) {
        int k = rand();
        printf("%f\n", a + k * s);
    }
    return 0;
}
