#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (array[i] > array[i - 1] && array[i] > array[i + 1] ) {
            ++count;
        }
    }
    printf("%d", count);
}
