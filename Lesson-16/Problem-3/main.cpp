#include <iostream>

using namespace std;

int main() {
    int p, x, y;
    cin >> p >> x >> y;
    int tmp_1 = x * 100 + y;
    int tmp_2 = tmp_1 + tmp_1 * p / 100;
    int rub = tmp_2 / 100;
    int kop = tmp_2 % 100;
    cout << rub << " " << kop << endl;
}
