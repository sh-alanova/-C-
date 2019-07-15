#include <stdio.h>
#include <stdlib.h>

int main() {
    int count[26];
    for(int i = 0; i < 26; ++i) {
        count[i] = 0;
    }
    char str[100001];
    scanf("%s", &str);
    for(int i = 0; str[i] != 0; ++i) {
        ++count[str[i] - 'a'];
    }
    for(int i = 0; i < 26; ++i) {
        printf("%d ", count[i]);
    }
}
