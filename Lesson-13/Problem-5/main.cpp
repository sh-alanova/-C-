#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lf%lf", &x, &y);
    int count = 1;
    while(y - x > 10e-8) {
        x *= 1.7;
        ++count;
    }
    printf("%d", count);
    return 0;
}
