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
    int t;
    if (!(cin >> t)) return 0;
    if (t>=1 && t<=6840) {
        while (t--) {
            int a,b,c;
            cin >> a >> b >> c;
            if (a>=1&&b>=1&&c>=1 && a<=20&&b<=20&&c<=20) {
                int maximum = max({a,b,c});
                int minimum = min({a,b,c});
                if ((maximum==a && minimum==c) || (maximum==c && minimum==a)) {
                    cout << b << endl;
                } else if ((maximum==b && minimum==c) || (maximum==c && minimum==b)) {
                    cout << a << endl;
                } else if ((maximum==a && minimum==b) || (maximum==b && minimum==a)) {
                    cout << c << endl;
                }
            }
        }
        return 0;
    }



}