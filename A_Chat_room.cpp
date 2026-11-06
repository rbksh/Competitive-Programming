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

    // int t;   
    // cin >> t;

    // while (t--) {
    //     // solution goes here
    // }
    string s; cin >> s;
    string target = "hello";
    int targetPointer = 0;

    for (int i = 0; i < s.length(); i++) {
        if (targetPointer == 5) {
            // cout << "YES" << endl;
            break;
        }
        if (s[i] == target[targetPointer]) {
            targetPointer++;
        }
    }
    if (targetPointer == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}