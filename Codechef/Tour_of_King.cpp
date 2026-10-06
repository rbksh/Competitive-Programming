#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t>=1 && t<=100) {
        while (t--) {
            int n,m;
            cin >> n >> m;
            int total = (n*5) + (m*7);
            cout << total << endl;
        }
    }
    return 0;
}