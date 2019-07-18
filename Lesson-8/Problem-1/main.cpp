#include<stdio.h>
#include<stdlib.h>

int main()
{
    int * pa = NULL;

    pa = malloc(100 * sizeof(int));
    for(int i = 0; i < 100; ++i) {
        pa[i] = i + 1;
    }
    free(pa);

    for (int _i = 0; _i < 100; ++_i)
        printf("%d\n", pa[_i]);
    return 0;
}
