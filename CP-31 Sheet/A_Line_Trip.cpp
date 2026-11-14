#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n + 2);
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    a[n + 1] = x;
    
    int max_gap = 0;
    for (int i = 1; i <= n + 1; i++) {
        int diff = a[i] - a[i - 1];
        if (i == n + 1) {
            diff *= 2;
        }
        max_gap = max(max_gap, diff);
    }
    
    cout << max_gap << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}