#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fin = fopen("input.txt", "rb");
    fseek(fin, 0, SEEK_END);
    int file_size = ftell(fin);
    printf("%d", file_size);
    return 0;
}
