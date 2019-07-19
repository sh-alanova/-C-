#include <stdio.h>
#include <stdlib.h>

void sort(int * a, int size) {
    for(int i = 0; i < size; ++i) {
        int min = i;
        for(int j = i + 1; j < size; ++j) {
            if(a[min] > a[j]) {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int * a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    sort(a, n);
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
