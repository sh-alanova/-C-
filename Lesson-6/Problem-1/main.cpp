#include <stdio.h>

int main() {
    int h, m;
    char x;
    scanf("%d:%d %c", &h, &m, &x);
    if(x == 'p' && h != 12) {
        h += 12;
        printf("%02d:%02d", h, m);
    } else {
        printf("%02d:%02d", h, m);
    }
}
