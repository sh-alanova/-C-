#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double x_1, x_2;
    x_1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    x_2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    if(x_1 <= x_2) {
        printf("%f %f", x_1, x_2);
    } else {
        printf("%f %f", x_2, x_1);
    }
    return 0;
}
