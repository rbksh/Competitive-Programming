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

    if (t>=1 && t<=270) {
        while (t--) {
            int a,b,c;
            cin >> a >> b >> c;
            if (a==b) {
                cout << c << endl;
            } else if (a==c) {
                cout << b << endl;
            } else if (b==c) {
                cout << a << endl;
            }
        }
    }
    return 0;
}