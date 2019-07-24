#include <iostream>
#include<fstream>

using namespace std;


int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n, max = 0;
    while(fin >> n) {
        if(max < n) {
            max = n;
        }
    }
    fout << max << endl;
    fin.close();
    fout.close();
}
