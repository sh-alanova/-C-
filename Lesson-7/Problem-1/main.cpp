#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fin = fopen("input.txt", "r");
    FILE * fout = fopen("output.txt", "w");
    int number, sum = 0;
    while(fscanf(fin, "%d", &number) == 1) {
        sum += number;
    }
    fprintf(fout, "%d\n", sum);
    fclose(fin);
    fclose(fout);
}
