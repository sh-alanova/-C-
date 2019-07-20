#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, int start, int finish) {
    if(n == 1) {
        printf("1 1 2\n");
        printf("1 2 3\n");
    } else {
        int temp = 6 - start - finish;
        //printf("start = %d, temp = %d, finish = %d\n", start, temp, finish);
        Hanoi(n - 1, temp, finish);
        printf("%d %d %d\n", n, start, temp);
        printf("%d %d %d\n", n - 1, start, temp);
        printf("%d %d %d\n", n, temp, finish);
        Hanoi(n-1, temp, finish);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Hanoi(n, 1, 3);

    return 0;
}
