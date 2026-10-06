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

    string s;
    if (!(cin >> s)) return 0;

    if (!s.empty()) {
        if (islower(s[0])) {
            s[0] = toupper(s[0]);
        } else if (isupper(s[0])) {
            s[0] = toupper(s[0]);
        }
    }
    cout << s << endl;
    return 0;
}