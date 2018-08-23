#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = n;
    while(scanf(", %d", &n) == 1) {
        sum += n;
    }
    printf("%d", sum);
}
