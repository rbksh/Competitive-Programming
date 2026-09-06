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
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b == c || a + c == b || b + c == a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }





    return 0;

}