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
    string tmp, longest_word;
    getline(cin, s);
    for(int i = 0; i < s.size(); ++i){
        if(IsAlpha(s[i])) {
            tmp += s[i];
        } else {
            tmp = "";
        }
        if(tmp.size() > longest_word.size()) {
            longest_word = tmp;
        }
    }
    cout << longest_word;
}

