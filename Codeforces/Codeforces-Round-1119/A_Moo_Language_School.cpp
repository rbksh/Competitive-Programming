#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>
#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i += k) {
        bool has_zero = false;
        for (int j = 0; j < k; ++j) {
            if (s[i + j] == '0') {
                has_zero = true;
                break;
            }
        }
        if (!has_zero) {
            ans++;
        }
    }
    cout << ans << "\n";
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