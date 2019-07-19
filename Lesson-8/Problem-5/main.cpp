#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fout = fopen("output.dat", "wb");
    int n;
    scanf("%d", &n);
    fwrite(&n, sizeof(int), 1, fout);
    return 0;
}
