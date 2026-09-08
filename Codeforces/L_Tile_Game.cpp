#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b; 

    int dist = abs(a - b);

    if (dist % 2 == 0) {
        cout << "Jaivardhan" << endl;
    } else {
        cout << "Krritin" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}