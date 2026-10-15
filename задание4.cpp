#include <iostream>
using namespace std;

int main() {
    char type;
    int hours, weekend, lost;
    double rate = 0;
    double fine = 0;
    double total = 0;

    cout << "Enter type (C/M/B): ";
    cin >> type;
    cout << "Enter hours (1-24): ";
    cin >> hours;
    cout << "Weekend? (1-yes, 0-no): ";
    cin >> weekend;
    cout << "Lost ticket? (1-yes, 0-no): ";
    cin >> lost;

    if (hours < 1 || hours > 24) {
        cout << "Error: hours must be 1-24" << endl;
        return 0;
    }

    switch (type) {
    case 'C': rate = 4; fine = 50; break;
    case 'M': rate = 2; fine = 25; break;
    case 'B': rate = 7; fine = 80; break;
    default:
        cout << "Error: unknown type" << endl;
        return 0;
    }

    if (lost == 1) {
        total = fine;
        cout << "Rule: lost ticket fine" << endl;
    }
    else {
        int paidhours = hours;
        if (paidhours > 8) {
            paidhours = 8;
        }

        total = paidhours * rate;

        if (weekend == 1 && type != 'M') {
            total = total * 1.2;
            cout << "Rule: weekend +20%" << endl;
        }
        else {
            cout << "Rule: standard" << endl;
        }
    }

    cout << "Type: " << type << endl;
    cout << "Total: " << total << endl;
    return 0;
}