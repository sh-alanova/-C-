#include <iostream>
#include <cmath>

using namespace std;

int max(int & a, int & b, int & c) {
    if(b >= a && b >= c) {
        int tmp = b;
        b = c;
        c = a;
        a = tmp;
    }
    else if(c >= a && c >= b) {
        int tmp = c;
        c = b;
        b = a;
        a = tmp;
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
