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

void solve() {
    int n; 
    cin >> n;
    vector <int> digits;
    for (int i = 0; i < n; i++) {
        int a; 
        cin >> a;
        digits.push_back(a);
    }
    
    sort(digits.begin(), digits.end());
    
    digits[0]++;
    
    long long maxProduct = 1;
    for (int i = 0; i < n; i++) {
        maxProduct *= digits[i];
    }
    
    cout << maxProduct << endl;
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
        solve();
    }
    return 0;
}