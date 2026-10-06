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

void printOddNumbers(int x, int y) {
    int start = min(x,y);
    int end = max(x,y);
    int sum = 0;

    for (int i = start + 1; i < end; i++) {
        if (i%2 != 0) {
            sum+=i;
        }
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x,y;
        cin >> x >> y;
        printOddNumbers(x,y);
    }
    return 0;
}

