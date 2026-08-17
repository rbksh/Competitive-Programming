#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;
    cin >> x;
    if (int(x) >= 65 && int(x) <= 90) {
        int(x) = int(x) - 32;
        cout << char(int(x)) << endl;
    } else if (int(x)>=97 && int(x)<=122) {
        int(x) = abs(32-int(x));
        cout << char(int(x)) << endl;
    }
    return 0;
}