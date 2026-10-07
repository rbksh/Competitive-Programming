#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        vector <bool> v2(n)
        while (n--) {
            long long a; cin >> a;
            v.push_back(a);
        }
        for (int i = 1; i < v.size(); i++) {
            if (v[i] != v[0]) {
                v2[i] == true;
            }
        }
        
    }


   return 0;
}