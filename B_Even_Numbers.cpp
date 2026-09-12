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
#ifndefONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double price = 31.24;
    int newPrice = (int)price; 

    double baseBill = 0;
    int n;
    cin >> n;


    int x = 5;
    double y = x;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i%2 == 0) {
            cout << i << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
}