#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char strs[101];
    fgets(strs, 101, stdin);
    int size = strlen(strs), sum = 0, i;
    for(i = 0; i <= size; ++i) {
        if(isdigit(strs[i])) {
            sum += strs[i] - '0';
        }
    }
    printf("%d", sum);
}
