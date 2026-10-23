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

    int t;
    if(!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int max_time = 0;
        int current_len = 0;

        for (char c : s) {
            if (c == '#') {
                current_len++;
            } else {
                if (current_len > 0) {
                    max_time = max(max_time, (current_len + 1) / 2);
                    current_len = 0;
                }
            }
        }
        if (current_len > 0) {
            max_time = max(max_time, (current_len + 1) / 2);
        }

        cout << max_time << "\n";
    }

    return 0;
}