#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if (k <= oddCount) {
        cout << 2 * k - 1 << "\n";
    } else {
        cout << 2 * (k - oddCount) << "\n";
    }

    return 0;
}