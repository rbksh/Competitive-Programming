#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int m = n - 4;
        vector<long long> val(m + 1);
        vector<long long> original_indices(m);
        for (int i = 1; i <= m; i++) {
            val[i] = a[i] + a[i + 2] - a[i + 4];
            original_indices[i - 1] = i;
        }

        sort(original_indices.begin(), original_indices.end(), [&](int i, int j) {
            if (val[i] != val[j]) {
                return val[i] < val[j];
            }
            return i < j;
        });

        long long total_pairs = 0;
        int i = 0;
        while (i < m) {
            int j = i;
            while (j < m && val[original_indices[j]] == val[original_indices[i]]) {
                j++;
            }
            long long count = j - i;
            long long total_comb = count * (count - 1) / 2;

            long long overlapping = 0;
            for (int k = i; k < j; k++) {
                int idx = original_indices[k];
                int left_bound = max(1, idx - 4);
                int right_bound = min(m, idx + 4);
                
                auto low_it = lower_bound(original_indices.begin() + i, original_indices.begin() + j, left_bound);
                auto high_it = upper_bound(original_indices.begin() + i, original_indices.begin() + j, right_bound);
                
                long long low = low_it - (original_indices.begin() + i);
                long long high = high_it - (original_indices.begin() + i);
                
                overlapping += (high - low - 1);
            }
            overlapping /= 2;

            total_pairs += (total_comb - overlapping);
            i = j;
        }

        cout << total_pairs << "\n";
    }

   return 0;
}
