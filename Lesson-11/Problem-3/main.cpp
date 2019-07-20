#include <stdio.h>
#include <stdlib.h>

void reverse() {
    int n;
    scanf("%d", &n);
    if(n == 0) {
         printf("0\n");
    } else {
        reverse();
        printf("%d\n", n);
    }
}

int main() {
    reverse();
    return 0;
}
