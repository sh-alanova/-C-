#include <stdio.h>
#include <stdlib.h>

void print(int n) {
    if(n == 0) {
        return 1;
    } else {
        print(n - 1);
        printf("%d\n", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
