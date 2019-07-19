#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fin = fopen("input (4).dat", "rb");
    int n, sum = 0;
    while(fread(&n, sizeof(int), 1, fin) == 1) {
        sum += n;
    }
    printf("%d\n", sum);
    return 0;
}
