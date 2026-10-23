#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int total_time = 30;
    if (t>=1 && t<=60) {
        while (t--) {
            int x;
            cin >> x;
            if (x>= total_time) {
                cout << "YES" << endl;
            } else if (x<total_time) {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}