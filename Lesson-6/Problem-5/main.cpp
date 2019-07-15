#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d;
    char str;
    if(scanf("%d.%d.%d.%d %c", &a, &b, &c, &d, &str) == 4) {
        if((0 <= a && a <= 255)
           && (0 <= b && b <= 255)
           && (0 <= c && c <= 255)
           && (0 <= d && d <= 255)) {
            printf("YES");
        }
    } else {
        printf("NO");
    }
    return 0;
}
