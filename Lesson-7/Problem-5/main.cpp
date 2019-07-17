#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fin = fopen("input.dat", "rb");
    FILE * fout = fopen("output.dat", "wb");
    char str[1048575];
    fscanf(fin, "%s", &str);
    fseek(fin, 0, SEEK_END);
    int file_size = ftell(fin), k;
    for(int i = file_size; i > 0; --i) {
        fseek(fin, i, SEEK_SET);
        k = fgetc(fin);
        fputc(k, fout);
    }
    fclose(fin);
    fclose(fout);
    }
