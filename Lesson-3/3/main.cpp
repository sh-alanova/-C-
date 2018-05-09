#include <stdio.h>

int main() {
    int n, i=1, factorial=1;
    scanf("%d", &n);
    while (i<=n) {
        factorial *= i;
        i++;
    }
    printf("%d", factorial);
}

