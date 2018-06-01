#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = n % 10;
    int b = n / 10 % 10;
    int c = n / 100;
    int sum = a + b + c;
    printf("%d", sum);
}
