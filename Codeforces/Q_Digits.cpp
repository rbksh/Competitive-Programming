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

    while (t--) {
        long long n;
        cin >> n;
        if (n == 0) {
            cout << 0 << endl;

        } else {
            while (n > 0) {
                long long digit = n%10;
                cout << digit << " ";
                n = n/10;
            }
            cout << endl;
        }
    }
    return 0;
}