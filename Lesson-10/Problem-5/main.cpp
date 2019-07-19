#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int min = n % 10, max = n % 10, temp = n / 10;
    while(temp > 0) {
        int digit = temp % 10;
        if(min > digit) {
            min = digit;
        }
        if(max < digit) {
            max = digit;
        }
        temp /= 10;
    }
    printf("%d %d", min, max);
    return 0;
}
