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

    int n;
    cin >> n;

    unordered_map<string, int> db;
    while (n--) {
        string s;
        cin >> s;
        if (db.find(s) == db.end()) {
            db[s] = 0;
            cout << "OK" << endl;
        } else {
            int count = ++db[s];
            cout << s << count << endl;
        }
    }
    
    return 0;
}