#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fin = fopen("input.dat", "rb");
    FILE * fout = fopen("output.txt", "w");
    int count[256];
    for(int i = 0; i < 256; ++i) {
        count[i] = 0;
    }
    int c;
    while((c = fgetc(fin)) != EOF) {
        ++count[c];
    }
    int max = 0;
    for(int i = 0; i < 256; ++i) {
        if (count[max] < count[i]) {
            max = i;
        }
    }
    fprintf(fout, "%d", max);
    fclose(fin);
    fclose(fout);
}
