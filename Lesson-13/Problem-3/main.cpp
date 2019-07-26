#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double s = a + b;
    if(fabs(s - c) < 1e-8) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
