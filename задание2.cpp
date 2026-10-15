#include <iostream>
using namespace std;

int main() {
    int hours, weekend, lostTicket;
    double total;

    cout << "Enter hours : ";
    cin >> hours;
    cout << "Weekend? (1-yes, 0-no): ";
    cin >> weekend;
    cout << "Lost ticket? (1-yes, 0-no): ";
    cin >> lostTicket;

    if (hours < 1 || hours > 24) {
        cout << "Error: hours must be 1-24" << endl;
        return 0;
    }

    if (lostTicket == 1) {
        total = 50;
    }
    else {
        int paidHours = hours;
        if (paidHours > 8) paidHours = 8;
        total = paidHours * 3;

        if (weekend == 1) {
            total = total * 1.2;
        }
    }

    cout << "Total: " << total << endl;
    return 0;
}