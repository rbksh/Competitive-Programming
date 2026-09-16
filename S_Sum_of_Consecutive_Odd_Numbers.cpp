#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <utility>
/*optional libraries
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
*/
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int sum  = 0;

    while (t--) {
        int x,y;
        cin >> x >> y;
        if (x == y) {
            cout << 0 << endl;
            break;
        } else if (y > x) {
            for (int i = x; i <= y; i++) {
                if (i%2 == 1) {
                    sum+=i;
                }
            }
            cout << sum << endl;
        } else if (x > y) {
            for (int i = y; i <= x; i++) {
                if (i%2 == 1) {
                    sum+=i;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}