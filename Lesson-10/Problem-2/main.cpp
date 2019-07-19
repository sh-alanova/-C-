#include <stdio.h>
#include <stdlib.h>

int main() {
    int v, t, s;
    scanf("%d%d", &v, &t);
    if(v < 0) {
        s = 109 - (abs(v) * t % 109);
    } else if(v > 0) {
        s = v * t % 109;
    }
    printf("%d", s);
    return 0;
}
