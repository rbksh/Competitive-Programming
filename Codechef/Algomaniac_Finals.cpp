#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int date_final = 17;
    if (x>=1 && x<=31) {
        if (x==date_final) {
            cout << "YAY" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}