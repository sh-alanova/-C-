#include <stdio.h>
#include <stdlib.h>

void move(int n, int i, int g) {
    int t = 6 - i - g;
    if (n == 1) {
        if(g == i % 3 + 1) {
            printf("%d %d %d\n", n, i, g);
        }else {
            printf("%d %d %d\n", n, i, t);
            printf("%d %d %d\n", n, t, g);
        }
    } else {
        if(g == i % 3 + 1) {
            move(n - 1, i, t);
            printf("%d %d %d\n", n, i, g);
            move(n - 1, t, g);
        } else {
            move(n - 1, i, g);
            printf("%d %d %d\n", n, i, t);
            move(n - 1, g, i);
            printf("%d %d %d\n", n, t, g);
            move(n - 1, i, g);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    move(n, 1, 3);
    return 0;
}
