#include <iostream>
using namespace std;

int main() {
    int hours;
    double total = 0;

    cout << "Enter hours (1-24): ";
    cin >> hours;

    if (hours < 1 || hours > 24) {
        cout << "Error: hours must be 1-24" << endl;
        return 1;
    }

    if (hours == 1) {
        total = 3;
    }
    if (hours >= 2) {
        int t = hours;
        if (t > 5) t = 5;
        total = 3 + (t - 1) * 2;
    }
    if (hours > 5) {
        total = total + (hours - 5) * 1.5;
    }

    cout << "Total: " << total << endl;
    return 0;
}
