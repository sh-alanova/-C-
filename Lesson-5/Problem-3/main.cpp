#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char strs[20001];
    fgets(strs, 20001, stdin);
    int size = strlen(strs), sum = strs[0] - '0', i;
    for(i = 1; i <= size; ++i) {
        if(strs[i] == '+') {
            sum += strs[i + 1] - '0';
        } else if(strs[i] == '-') {
            sum += strs[i + 1] - '0';
        }
    }
    printf("%d", sum);
}
