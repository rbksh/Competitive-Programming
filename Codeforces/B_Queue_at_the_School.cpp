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
#include <cctype>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    if(!(cin >> n >> t)) return 0;

    string s;
    cin >> s;
    vector <char> indexes;

    for (char c :s) {
        indexes.push_back(c);
    }

    for (int sec = 0; sec < t; sec++) {
        for (int i = 0; i < n - 1; i++) {
            if (indexes[i] == 'B' && indexes[i + 1] == 'G') {
                swap(indexes[i], indexes[i + 1]);
                i++;
            }
        }
    }

    for (char x: indexes) {
        cout << x;
    }

    cout << endl;
    return 0;
}
