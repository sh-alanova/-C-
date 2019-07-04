#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    FILE * fin = fopen("input.txt", "r");
    FILE * fout = fopen("output.txt", "w");
    int n;
    fscanf(fin, "%d", &n);
    char c;
    fseek(fin, n, SEEK_SET);
    c = fgetc(fin);
    fputc(c, fout);
    fclose(fin);
    fclose(fout);
}
