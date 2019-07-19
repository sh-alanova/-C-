#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int min = n % 10, temp_1 = n / 10;
    while(temp_1 > 0) {
        int digit = temp_1 % 10;
        if(min > digit) {
            min = digit;
        }
        temp_1 /= 10;
    }
    int max = n % 10, temp_2 = n / 10;
    while(temp_2 > 0) {
        int digit = temp_2 % 10;
        if(max < digit) {
            max = digit;
        }
        temp_2 /= 10;
    }
    printf("%d %d", min, max);
    return 0;
}
