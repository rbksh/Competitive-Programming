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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,m;
    cin >> a >> m;

    if (a < 12) {
        cout << "Child Pass" << endl;
    } else if (a >= 12 && a <= 17) {
        if (m >= 100) {
            cout << "Teen Premium Pass" << endl;
        } else if (m < 100) {
            cout << "Teen Basic Pass" << endl;
        }
    } else if (a >= 18 && a <= 59) {
        if (m >= 500) {
            cout << "Adult VIP Pass" << endl;
        } else if (m < 500) {
            cout << "Regular Adult Pass" << endl;
        }
    } else if (a >= 60) {
        cout << "Senior Citizen Pass" << endl;
    }
    return 0;
}