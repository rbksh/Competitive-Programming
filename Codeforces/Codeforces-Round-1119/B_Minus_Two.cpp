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
    int n;
    if (!(cin >> n)) return;

    map<int, int> cnt;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int max_freq = 0;

    for (auto const& [x, c] : cnt) {
        max_freq = max(max_freq, c);
    }

    map<int, int> next1;
    for (auto const& [x, c] : cnt) {
        next1[abs(x - 2)] += c;
    }

    for (auto const& [x, c] : next1) {
        max_freq = max(max_freq, c);
    }

    map<int, int> next2;
    for (auto const& [x, c] : next1) {
        next2[abs(x - 2)] += c;
    }

    for (auto const& [x, c] : next2) {
        max_freq = max(max_freq, c);
    }

    cout << max_freq << "\n";
}

void SolveProblem() {
    int t;
    cin >> t;

    while(t--) {
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}