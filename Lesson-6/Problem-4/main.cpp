#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    double arr[100];
    for(int i = 0; i < n; ++i) {
        scanf("%lf", &arr[i]);
    }
    double max = 0;
    for(int i = 0; i < n; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    int count = 0;
    while(max >= 1) {
        max /= 10;
        ++count;
    }
    for(int i = 0; i < n; ++i) {
        printf("%*.2f\n", count + 3, arr[i]);
    }
}
