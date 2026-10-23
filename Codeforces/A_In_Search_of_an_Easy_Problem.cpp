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
    int n;
    if (!(cin >> n)) return 0;

    if (n >= 1 && n <= 100) {
        bool is_hard = false;
        while (n--) {
            int response;
            cin >> response;
            if (response == 1) {
                is_hard = true;
            }
        }
        if (is_hard) {
            cout << "HARD" << "\n";
        } else {
            cout << "EASY" << "\n";
        }
    }
    return 0;
}
