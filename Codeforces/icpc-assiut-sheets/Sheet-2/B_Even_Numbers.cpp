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

    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i%2 == 0) {
            count++;
        }
    }
    if (count == 0) {
        cout << -1 << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if (i%2 == 0) {
                cout << i << endl;
            }
        }
    }
    return 0; 
}