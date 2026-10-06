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

    long long a,b;
    cin >> a >> b;

    bool foundAny = false;

    for (int i = a; i <= b; i++) {
        vector <int> digits;
        int temp = i;
        bool isLucky = true;
        while (temp > 0) {
            int digit = temp%10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            temp = temp/10;
        }

        if (isLucky) {
            cout << i << " ";
            foundAny = true;
        }
    }

    if (!foundAny) {
        cout << -1 << endl;
    }

    return 0;
}