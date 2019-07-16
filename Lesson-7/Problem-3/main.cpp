#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin = fopen("input.dat", "rb");
    FILE *fout = fopen("output.txt", "w");
    fseek(fin, 0, SEEK_END);
    int file_size = (int) ftell(fin);
    fprintf(fout, "%d", file_size);
    fclose(fin);
    fclose(fout);
}
