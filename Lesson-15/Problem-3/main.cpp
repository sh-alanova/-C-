#include <iostream>


void trunc(int & n) {
    int digit = n % 10;
    n -= digit;
}

int main() {
    int n = 123;
    trunc(n);
    std::cout << n << std::endl;
}
