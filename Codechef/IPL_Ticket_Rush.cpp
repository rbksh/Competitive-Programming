#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    if (t>=1 && t<=1000) {
        while (t--) {
            long long n,m;
            cin >> n >> m;
            if (n>m) {
                cout << n-m << endl;
            } else if (n<=m) {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}