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

    string s; cin >> s;
    bool givesOutput = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            givesOutput = true;
            break;
        } 
    }
    
    if (givesOutput) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
    
}