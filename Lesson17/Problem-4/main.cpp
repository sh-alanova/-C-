#include <iostream>
#include <string>

using namespace std;

bool IsAlpha(char c) {
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return true;
    } else {
        return false;
    }
}

void IsCapital(char & c) {
    if((c >= 'A' && c <= 'Z')) {
        c += 'a' - 'A';
    }
}

void IsSmall(char & c) {
    if((c >= 'a' && c <= 'z')) {
       c -= 'a' - 'A';
    }
}

int main() {
    string s;
    getline(cin, s);
    if(IsAlpha(s[0])) {
        s[0] -= 'a' - 'A';
    }
    for(int i = 1; i < s.size(); ++i){
        if(!IsAlpha(s[i - 1]) && IsAlpha(s[i])) {
            IsSmall(s[i]);
        } else {
            IsCapital(s[i]);
        }
    }
    cout << s;
}
