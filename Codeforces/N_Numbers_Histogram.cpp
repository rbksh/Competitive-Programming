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

    char s;
    cin >> s;

    int n;
    cin >> n;

    while (n--) {
        int number;
        cin >> number;
        while (number--) {
            cout << s;
        }
        cout << endl;
    }
    return 0;
    
}