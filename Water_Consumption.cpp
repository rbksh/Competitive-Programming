#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t>=1 && t<=2000) {
        while (t--) {
            int x;
            cin >> x;
            if (x>=1 && x<=4000) {
                if (x>=2000) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}