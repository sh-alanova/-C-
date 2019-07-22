#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    double a, b;
    scanf("%d%lf%lf", &n, &a, &b);
    for (int i = 0; i < n; ++i) {
        printf("%f\n", a + rand() % (b - a + 1));
    }
    return 0;
}
