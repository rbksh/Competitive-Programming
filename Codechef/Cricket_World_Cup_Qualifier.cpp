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
6

    int x;
    if (!(cin >> x)) return 0;
    if (x>=1 && x<=20) {
        if (x>=12) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}