#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    n = n % (24 * 60);
    int hour = n / 60;
    int minute = n % 60;
    printf("%d %d", hour, minute);
}
