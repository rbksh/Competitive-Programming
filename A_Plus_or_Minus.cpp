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
    if (t >= 1 && t <= 162) {
        while (t--) {
            int a, b, c;
            cin >> a >> b >> c;
            if (a >= 1 && b >= 1 && a <= 9 && b <= 9 && c >= -8 && c <= 18) {
                if (a + b == c) {
                    cout << "+" << endl;
                } else if (a - b == c) {
                    cout << "-" << endl;
                }
            }
        }
    }
    return 0;
}
