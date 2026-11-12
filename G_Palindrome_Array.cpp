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
    vector <int> array;
    for (int i = 0; i < n; i++) {
        long long a; cin >> a;
        array.push_back(a);
    }

    bool palindrome = true;

    for (int i = 0; i < array.size(); i++) {
        if (array[i] != array[n-i-1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
    
}