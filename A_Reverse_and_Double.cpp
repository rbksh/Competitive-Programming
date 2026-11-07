#include <bits/stdc++.h>

using namespace std;

long long get_gap(const vector<long long>& arr) {
    long long max_diff = 0;
    for (size_t i = 0; i + 1 < arr.size(); i++) {
        max_diff = max(max_diff, abs(arr[i] - arr[i + 1]));
    }
    return max_diff;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long ans = get_gap(a);

    vector<int> candidate_indices;
    for (int i = 0; i + 1 < n; i++) {
        if (abs(a[i] - a[i + 1]) == ans) {
            candidate_indices.push_back(i);
        }
    }

    if (candidate_indices.size() <= 2) {
        for (int idx : candidate_indices) {
            int l = max(0, idx - 2);
            int r = min(n - 1, idx + 3);
            for (int i = l; i <= r; i++) {
                for (int j = i; j <= r; j++) {
                    vector<long long> temp = a;
                    reverse(temp.begin() + i, temp.begin() + j + 1);
                    for (int k = i; k <= j; k++) {
                        temp[k] *= 2;
                    }
                    ans = min(ans, get_gap(temp));
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}