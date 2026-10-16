#include <iostream>
using namespace std;

int main() {
	char type;
    int hours;
    double rate = 0;
    double total = 0;

    cout << "Enter type (C/M/B): ";
    cin >> type;
    cout << "Enter hours (1-24): ";
    cin >> hours;

    if (hours < 1 || hours > 24) {
        cout << "Error: hours must be 1-24" << endl;
        return 1;
    }

    switch (type) {
    case 'C': rate = 4; break;
    case 'M': rate = 2; break;
    case 'B': rate = 7; break;
    default:
        cout << "Error: unknown type" << endl;
        return 1;
    }

    if (hours > 8) {
        total = 8 * rate;
    }
    else {
        total = hours * rate;
    }

    cout << "Type: " << type << endl;
    cout << "Total: " << total << endl;
    return 0;
}
