#include <iostream>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    bool foundEven = false;

    for (int i = l; i <= r; i++) {
        if (i % 2 == 0) {
            foundEven = true;
            break;
        }
    }

    if (foundEven) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}