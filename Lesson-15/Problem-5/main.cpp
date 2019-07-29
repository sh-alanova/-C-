#include <iostream>

using namespace std;

int max(int a = 0, int b = 0, int c = 0) {
    int res;
    if(a > b) {
        res = a;
    } else {
        res = b;
    }
    if(res < c) {
        res = c;
    }
    return res;
}

int main() {
    cout << max(1) << " ";
    cout << max(1, 2) << " ";
    cout << max(1, 2, 3) << endl;
}
