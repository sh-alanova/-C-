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

int main() {
    string s;
    int count = 0;
    getline(cin, s);
    if(IsAlpha(s[0])) {
        ++count;
    }
    for(int i = 1; i < s.size(); ++i){
        if(!IsAlpha(s[i - 1]) && IsAlpha(s[i])) {
            ++count;
        }
    }
    cout << count;
}
