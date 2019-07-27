#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); ++i) {
        if((s[i] >= 'A' && s <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            if(s[i] == 'X' || s[i] == 'x' ||
               s[i] == 'Y' || s[i] == 'y' ||
               s[i] == 'Z' || s[i] == 'z') {
                s[i] -= 22;
            } else if(s[i] == ' ') {}
            else {
                s[i] += 3;
            }
        }
    }
    cout << s;
}

