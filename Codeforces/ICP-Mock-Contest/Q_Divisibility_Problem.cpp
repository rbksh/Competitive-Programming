#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int moves = 0;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        if(a%b == 0) {
            cout << 0 << endl;
        } else {
            moves = b - (a%b);
            cout << moves << endl;
        }
    }

    return 0;

}