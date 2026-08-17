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

    int r,g,b;
    if (!(cin >> r >> g >> b)) return 0;
    int number = (r*100) + (g*10) + b;
    if (number%4==0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}