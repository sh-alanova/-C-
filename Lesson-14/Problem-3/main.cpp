#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    long long a, b;
    scanf("%d%Ld%ld", &n, &a, &b);
    for (int i = 0; i < n; ++i) {
        int q = (int)a + rand() % (int)(b - a + 1);
        int p = (int)a + rand() % (int)(b - a + 1);
        printf("q = %d\n", q);
        printf("p = %d\n", p);
        q = (long long)q;
        p = (long long)p;
        printf("Lq = %Ld\n", q);
        printf("Lp = %Ld\n", p);
        p << 31;
        printf("Lp< = %Ld\n", p);
        printf("%Ld\n", p + q);
    }
    return 0;
}
