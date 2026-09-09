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

    string s;
    cin >> s;

    int buttons = 0;
    int n = s.length();
    int i = 0;

    while (i < n) {
        if (i + 1 < n && s[i] == '0' && s[i + 1] == '0') {
            buttons++;
            i += 2;
        } else {
            buttons++;
            i++;
        }
    }

    cout << buttons << endl;

    return 0;
}