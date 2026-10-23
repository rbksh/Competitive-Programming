#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    const long long MOD = 998244353;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> dp(4, 0);

        if (s[0] == '?' && s[1] == '?') {
            dp[0] = dp[1] = dp[2] = dp[3] = 1;
        } else if (s[0] == '?') {
            int v1 = s[1] - '0';
            dp[v1] = 1;
            dp[2 + v1] = 1;
        } else if (s[1] == '?') {
            int v0 = s[0] - '0';
            dp[v0 * 2] = 1;
            dp[v0 * 2 + 1] = 1;
        } else {
            int state = (s[0] - '0') * 2 + (s[1] - '0');
            dp[state] = 1;
        }

        for (int i = 2; i < n; i++) {
            vector<long long> next_dp(4, 0);
            char c = s[i];

            for (int prev = 0; prev < 4; prev++) {
                if (dp[prev] == 0) continue;

                int p0 = prev / 2;
                int p1 = prev % 2;
                int prev_w = p0 + p1;

                for (int cur = 0; cur <= 1; cur++) {
                    if (c != '?' && (c - '0') != cur) continue;

                    int cur_w = p1 + cur;
                    if (cur_w != prev_w) {
                        int nxt = p1 * 2 + cur;
                        next_dp[nxt] = (next_dp[nxt] + dp[prev]) % MOD;
                    }
                }
            }
            dp = next_dp;
        }

        long long ans = 0;
        for (int i = 0; i < 4; i++) {
            ans = (ans + dp[i]) % MOD;
        }

        cout << ans << endl;
    }

    return 0;
}