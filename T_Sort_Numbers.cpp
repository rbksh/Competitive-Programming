#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    if (a >= b && a >= c) {
        if (b >= c) {
            cout << c << endl << b << endl << a << endl;
        } else {
            cout << b << endl << c << endl << a << endl;
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            cout << c << endl << a << endl << b << endl;
        } else {
            cout << a << endl << c << endl << b << endl;
        }
    } else { // c is the largest
        if (a >= b) {
            cout << b << endl << a << endl << c << endl;
        } else {
            cout << a << endl << b << endl << c << endl;
        }
    }

    cout << endl;
    cout << a << endl << b << endl << c << endl;

    return 0;
}
