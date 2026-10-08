#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> mem;
    vector<bool> printed(n + 1, false);

    for (int i = 0; i < n; ++i) {
        int doc = i + 1;
        if (s[i] == '1') {
            mem.push_back(doc);
        } else if (s[i] == '2') {
            if (!mem.empty()) {
                printed[mem.back()] = true;
                mem.pop_back();
            } else {
                printed[doc] = true;
            }
        } else if (s[i] == '3') {
            printed[doc] = true;
        }
    }

    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            count++;
        }
    }

    cout << count << "\n";
    bool first = true;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            if (!first) {
                cout << " ";
            }
            cout << i;
            first = false;
        }
    }
    cout << "\n";
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