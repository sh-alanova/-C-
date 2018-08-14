#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char strs[101];
    fgets(strs, 101, stdin);
    int i, j = strlen(strs) - 2;
    for(i = 0; i < j; ++i) {
        if(strs[i] - strs[j] != 0 && abs(strs[i] - strs[j]) != 32) {
            printf("NO");
            return 0;
        }
        --j;
    }
    printf("YES");
}
