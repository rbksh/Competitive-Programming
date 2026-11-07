#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int n, k;
    cin >> n >> k;

    int otherParity = (k + 1) % 2;
    int haveInA = 0, neededInB = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == otherParity) haveInA++;
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == otherParity) neededInB++;
    }

    return neededInB <= haveInA;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
