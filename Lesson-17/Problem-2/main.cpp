#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int count = 1;
    getline(cin, s);
    for(int i = 0; s[i] != 0; ++i){
        if(s[i] == ' ') {
            ++count;
        }
    }
    if(s[s.size() - 1] == ' ') {
        --count;
    }
    cout << count;
}
