#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fin = fopen("input.dat", "rb");
    int n;
    fread(&n, sizeof(int), 1, fin);
    printf("%d", n);
    return 0;
}
