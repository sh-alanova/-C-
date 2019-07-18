#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    unsigned char* pa = (unsigned char*)&a;
    for(int i = 0; i < 4; ++i) {
        printf("%d ", pa[i]);
    }
    return 0;
}
