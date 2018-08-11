#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for(i = 33; i <= 126; ++i) {
        putchar(i);
        printf(" %d\n",  i);
    }
}
