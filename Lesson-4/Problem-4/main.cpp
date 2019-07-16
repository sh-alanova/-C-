#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int str[N];
    for(int i = 0; i < N ; ++i) {
        scanf("%d", &str[i]);
    }
    int max = str[0];
    for(int i = 0; i < N; ++i) {
        if(max < str[i]) {
            max = str[i];
        }
    }
    printf("%d\n", max);
    return 0;
}
