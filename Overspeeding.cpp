#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    int speed_limit = 40;
    if (s>=1 && s<=50) {
        if (s>speed_limit) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}