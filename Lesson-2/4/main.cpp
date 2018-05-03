#include <stdio.h>

int main(){
    int a, b, n;
    scanf("%d%d", &a, &b);
    scanf("%d", &n);
    int sum = a * 100 + b;
    int price = sum * n;
    int rub = price / 100;
    int kop = price % 100;
    printf("%d %d", rub, kop);
}

