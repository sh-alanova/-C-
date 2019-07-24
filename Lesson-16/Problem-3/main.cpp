#include <iostream>

using namespace std;

int main() {
    int p, x, y;
    cin >> p >> x >> y;
    int tmp = x * 100 + y;
    int rub = (tmp + tmp * p / 100) / 100;
    int kop = (tmp + tmp * p / 100) % 100;
    cout << rub << " " << kop << endl;
}
