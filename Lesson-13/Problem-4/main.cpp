#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double n;
    scanf("%lf", &n);
    int rub = (int) n;
    int kop = floor((n  - rub) * 100 + 0.9);
    printf("%d %d", rub, kop);
    return 0;
}
