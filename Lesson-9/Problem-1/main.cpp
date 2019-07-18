#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        int fact = 1;
        for(int i = 2; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
    return 0;
}
