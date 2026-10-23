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

    int x;
    if (!(cin >> x)) return 0;
    if (x>=100 && x<=999) {
        if (x==404) {
            cout << "NOT FOUND" << endl;
        } else {
            cout << "FOUND" << endl;
        }
    }
    return 0;

}