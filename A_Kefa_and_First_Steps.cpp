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

    int n; cin >> n;
    vector <long long> moneyMade;
    while (n--) {
        long long a; cin >> a;
        moneyMade.push_back(a);
    }

    if (moneyMade.empty()) {
        cout << 0 << endl;
        return 0;
    }

    int subStrLength = 1;
    int maxSubStrLength = 1;
    int left = 0;
    int right = 1;
    
    while (right < moneyMade.size()) {
        if (moneyMade[left] <= moneyMade[right]) {
            subStrLength++;
        } else {
            subStrLength = 1; 
        }
        maxSubStrLength = max(maxSubStrLength, subStrLength);
        left++;
        right++;
    }
    
    cout << maxSubStrLength << endl;
    return 0;
}