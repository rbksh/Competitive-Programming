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

    int a, b;
    if (!(cin >> a >> b)) return 0;

    int years = 0;

    if (a >= 1 && b >= 1 && a <= b && a <= 10 && b <= 10) {
        while (a <= b) {
            a *= 3;
            b *= 2;
            years++;
        }
        cout << years << endl;
        return 0;
    }
}
