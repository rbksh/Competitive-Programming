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
    vector <int> coinValues;
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        int coinValue; cin >> coinValue;
        coinValues.push_back(coinValue);
        totalSum += coinValues[i];
    }
    sort(coinValues.rbegin(),coinValues.rend());
    int runningSum = 0;
    int coinCount = 0;
    for (int i = 0; i < n; i++) {
        runningSum += coinValues[i];
        coinCount++;
        if (runningSum > (totalSum - runningSum)) {
            cout << coinCount;
            break;
        }
    }

}