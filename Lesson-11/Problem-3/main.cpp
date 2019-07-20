#include <stdio.h>
#include <stdlib.h>

int pow(int a, int n) {
    if(n == 0) {
        return 1;
    } else {
        int res;
        if(n % 2 == 1) {
            return a * pow(a, n - 1);
        } else {
            return pow(a * a, n / 2);
        }
    }
}

int main() {
    int a, n;
    scanf("%d%d", &a, &n);
    int digit = pow(a, n) % 1000;
    printf("%d\n", digit);
    return 0;
}
