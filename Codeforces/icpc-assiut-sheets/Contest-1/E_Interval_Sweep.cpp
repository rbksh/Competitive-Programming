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

    int a,b;
    if (!(cin >> a >> b)) return 0;

    if (a==0 && b==0) {
        cout << "NO"<< endl;
    } else if (a==b || abs(a-b) ==1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
//difference between the extremeties of the interval can be atmost 1.
    return 0;

}