#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double s = a + b;
    if(fabs(s - c) < pow(2, -52)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
