#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void order(int * a, int * b, int * c) {
    int a1 = *a, b1 = *b, c1 = *c;
    if(b1 <= a1 && b1 <= c1) {
        swap(&a1, &b1);
    } else if(c1 <= a1 && c1 <= b1) {
        swap(&a1, &c1);
    }
    if(b1 > c1) {
        swap(&b1, &c1);
    }
    *a = a1, *b = b1, *c = c1;
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    order(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
