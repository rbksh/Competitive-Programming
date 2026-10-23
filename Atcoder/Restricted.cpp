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
    int sum = a+b;
    if (sum>=10) {
        cout << "error" << endl;
    } else {
        cout << sum << endl;
    }

    return 0;


}