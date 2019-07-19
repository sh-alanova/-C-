#include <stdio.h>
#include <stdlib.h>

int main() {
    int v, t, s;
    scanf("%d%d", &v, &t);
    if(v < 0) {
        s = (109 + (v * t % 109)) % 109;
    } else {
        s = v * t % 109;
    }
    printf("%d", s);
    return 0;
}
