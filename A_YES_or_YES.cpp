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

    while (t--) {
        string s;
        cin >> s;
        if (s.length() == 3) {
            if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 's' || s[2] == 'S')) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
