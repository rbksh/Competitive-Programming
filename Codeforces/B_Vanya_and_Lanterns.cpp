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

    int t = 1;

    while (t--) {
        int n;
        double len;
        cin >> n >> len;

        vector<double> pos(n);
        for (int i = 0; i < n; i++) {
            cin >> pos[i];
        }

        sort(pos.begin(), pos.end());

        double ans = max(pos[0], len - pos[n - 1]);

        for (int i = 0; i < n - 1; i++) {
            double gap = (pos[i + 1] - pos[i]) / 2.0;
            if (gap > ans) {
                ans = gap;
            }
        }

        cout << fixed << setprecision(10) << ans << endl;
    }
    
    return 0;
}