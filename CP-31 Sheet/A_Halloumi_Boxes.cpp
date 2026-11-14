#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> boxes(n);
        for (int i = 0; i < n; i++) {
            cin >> boxes[i];
        }
        
        bool sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (boxes[i] > boxes[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << "YES" << endl;
        } else if (k == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}