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

    int n,m;
    while (cin >> n >> m) {
        int sum1 = 0;
        int sum2 = 0;
        if (m <= 0 || n <= 0) {
            break;
        } else {
            if (n > m) {
                for (int i = m; i <= n; i++) {
                    sum1+=i;
                    cout << i << " ";
                }
                cout << "sum =" << sum1 << endl;
            } else {
                for (int i = n; i <= m; i++) {
                    sum2+=i;
                    cout << i << " ";
                }
                cout << "sum =" << sum2 << endl;
            }
        }
    }
    return 0;
}