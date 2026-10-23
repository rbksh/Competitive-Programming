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

    int count;
    cin >> count;

    int g1 = 0, g2 = 0, g3 = 0, g4 = 0;

    for (int i = 0; i < count; i++) {
        int val;
        cin >> val;
        if (val == 1) g1++;
        else if (val == 2) g2++;
        else if (val == 3) g3++;
        else if (val == 4) g4++;
    }

    int ans = g4;

    ans += g3;
    g1 = max(0, g1 - g3);

    ans += g2 / 2;
    if (g2 % 2 != 0) {
        ans++;
        g1 = max(0, g1 - 2);
    }

    if (g1 > 0) {
        ans += (g1 + 3) / 4;
    }

    cout << ans << endl;

    return 0;
}