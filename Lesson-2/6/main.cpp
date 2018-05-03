#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int time = 45 * n;
    int  even = ((n-1) / 2) * 15;
    int ood = (((n-1) / 2) + ((n-1) % 2)) * 5;
    time += even + ood;
    int hour = 9 + time / 60;
    int minute = time % 60;
    printf("%d %d", hour, minute);
}

