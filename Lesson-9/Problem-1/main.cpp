#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}
