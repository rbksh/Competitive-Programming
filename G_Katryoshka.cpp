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

    long long n, m, k; 
    cin >> n >> m >> k;

    long long ans = 0;

    long long type2 = min({n / 2, m, k});
    ans += type2;
    n -= type2 * 2;
    m -= type2;
    k -= type2;

    long long remaining_eyes_for_type3 = min(n, min(m, k));
    ans += remaining_eyes_for_type3;
    n -= remaining_eyes_for_type3;
    m -= remaining_eyes_for_type3;
    k -= remaining_eyes_for_type3;

    long long type1 = min({n / 2, k});
    ans += type1;

    cout << ans << "\n";
    
    return 0;
}