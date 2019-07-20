#include <stdio.h>
#include <stdlib.h>

int sum() {
    int n;
    scanf("%d", &n);
    if(n == 0) {
        return 0;
    } else {
        return n += sum(n);
    }
}

int main() {
    printf("%d\n", sum());
    return 0;
}
