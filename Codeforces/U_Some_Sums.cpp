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

    int n,a,b;
    cin >> n >> a >> b;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        vector <int> digits;
        while (i > 0) {
            int digit = i%10;
            digits.push_back(digit);
            i = i/10;
        }
        int sz = digits.size();
        for (int i = 0; i <= sz - 1; i++) {
            if (digits[i] >= a && digits[i] <= b) {
                sum+=digits[i];
            }
        }
    }
    cout << sum << endl;
    return 0;
}