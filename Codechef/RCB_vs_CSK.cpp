#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    if (x>=150 && x<=250) {
        if (y>=150 && y<=x+6) {
            if (x-y>=18) {
                cout << "RCB" << endl;
            } else {
                cout << "CSK" << endl;
            }
        }
    }
    return 0;
}