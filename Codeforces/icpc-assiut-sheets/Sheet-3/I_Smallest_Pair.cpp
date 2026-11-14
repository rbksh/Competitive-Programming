#include <bits/stdc++.h>

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

    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        int minValue = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int value = numbers[i] + numbers[j] + j - i;
                if (value < minValue) {
                    minValue = value;
                }
            }
        }

        cout << minValue << "\n";
    }

    return 0;
}