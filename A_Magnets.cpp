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

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if(!(cin >> n)) return 0;

    vector <string> positions;

    while (n--) {
        string ch;
        cin >> ch;
        if (ch == "01") {
            positions.push_back(ch);
        } else if (ch == "10") {
            positions.push_back(ch);
        }
    }

    int totalGroups = 1;
    int sz = positions.size();

    for (int i = 0; i < sz - 1; i++) {
        if (positions[i] != positions[i+1]) {
            totalGroups++;
        }
    }

    cout << totalGroups << "\n";

    return 0;
}