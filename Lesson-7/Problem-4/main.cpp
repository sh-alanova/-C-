#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fin = fopen("input.dat", "rb");
    FILE * fout = fopen("output.txt", "w");
    int count[256];
    for(int i = 0; i < 256; ++i) {
        count[i] = 0;
    }
    char str[1024];
    fscanf(fin, "%s", &str);
    for(int i = 0; str[i] != 0; ++i) {
        ++count[str[i]];
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
