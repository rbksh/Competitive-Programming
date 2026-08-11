#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin >> x;
    if (int(x) >= 65 && int(x) <= 90) {
        int(x) = 32 - int(x);
        cout << "" << char(int(x)) << endl;
    } else {
        cout << char(int(x)) << endl;
    }
    return 0;
}