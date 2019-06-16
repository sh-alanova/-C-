#include <stdio.h>

int main() {
    int a, b, c, n;
    char d;
    double res;
    n = scanf("%d%c%d%c%d", &a, &d, &b, &d, &c);
    if(n < 3) {
        res = a;
    } else if(n < 5) {
            res = (double) a / b;
        } else {
            res = a + (double) b / c;
        }
        printf("%f", res);
        return 0;
}
