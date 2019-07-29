#include <stdio.h>
#include <stdlib.h>

int pow(int a, int n) {
    a %= 1000;
    if(n == 0) {
        return 1;
    } else {
        if(n % 2 == 1) {
            return a * pow(a, n - 1) % 1000;
        } else {
            return pow(a * a, n / 2) % 1000;
        }
    }
}

int main() {
    int a, n;
    scanf("%d%d", &a, &n);
    int digits = pow(a, n) % 1000;
    printf("%d\n", digits);
    return 0;
}
