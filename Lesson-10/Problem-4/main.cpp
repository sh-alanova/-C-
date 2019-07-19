#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int digit = n % 10;
    if(n != 11 && digit == 1) {
        printf("%d korova", n);
    } else if(n != 12 && n != 13 && n != 14 
              && (digit == 2 || digit == 3 || digit == 4)) {
        printf("%d korovy", n);
    } else {
        printf("%d korov", n);
    }
    return 0;
}
