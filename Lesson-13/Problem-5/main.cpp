#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lflf", &x, &y);
    double temp_1 = x, temp_2 = 0;
    int count = 0;
    for(int i = 0; y >= 1; ++i) {
        y -= temp_1;
        printf("y = %f\n", y);
        temp_1 = 0.7 * (x + temp_2);
        printf("t1 = %f\n", temp_1);
        temp_2 += temp_1;
        printf("t2 = %f\n", temp_2);
        ++count;
        printf("count = %d\n", count);
    }

    printf("%d", count);
    return 0;
}
