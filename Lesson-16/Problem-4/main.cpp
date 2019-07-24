#include <iostream>

using namespace std;

int main() {
    int p, x, y, k;
    cin >> p >> x >> y >> k;
    int tmp = x * 100 + y;
    while(k > 0) {
        tmp += tmp * p / 100;
        --k;
    }
    int rub = tmp / 100, kop = tmp % 100;
    cout << rub << " " << kop << endl;
}
