#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ticket_1 = n % 10, ticket_2 = (n % 60) / 10, ticket_3 = n / 60;
    if(ticket_1 * 15 >= 125) {
        ++ticket_2;
        ticket_1 = 0;
    }
    if(ticket_2 * 125 + ticket_1 * 15 >= 440) {
        ++ticket_3;
        ticket_2 = 0;
        ticket_1 = 0;
    }
    cout << ticket_1 << " " << ticket_2 << " " << ticket_3 << endl;
}
