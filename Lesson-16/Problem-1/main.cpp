#include <iostream>
#include <cmath>

using namespace std;

void swap(int & x, int & y, int & z) {
    int tmp = x;
        x = y;
        y = z;
        z = tmp;
}

int max(int & a, int & b, int & c) {
    if(b >= a && b >= c) {
        swap(b, c, a);
    }
    else if(c >= a && c >= b) {
        swap(c, b, a);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b + c && b < a + c && c < a + b) {
        max(a, b, c);
        double cos = ((b * b + c * c - a * a) / (2. * b * c));
        if(cos == 0) {
            cout << "rectangular" << endl;
        } else if(cos > 0) {
            cout << "acute" << endl;
        } else {
            cout << "obtuse" << endl;
        }
    } else {
        cout << "impossible" << endl;
    }
}
