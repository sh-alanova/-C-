#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[101];
    scanf("%s", &str);
    int n = strlen(str);
    for(int i = 0; i < n / 2; ++i) {
        int diff = abs(str[i] - str[n - i - 1]);
        if(diff != 0 && diff != 'a' - 'A') {
            printf("No");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
