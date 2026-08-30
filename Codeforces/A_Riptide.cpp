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
#include <iomanip> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int rounds = 0;
        
        while (a != b && b != c && a != c) {
            int mx = max({a, b, c});
            int mn = min({a, b, c});
            
            if (mx == a && mn == b) {
                a -= 1;
                b += 1;
            } else if (mx == a && mn == c) {
                a -= 1;
                c += 1;
            } else if (mx == b && mn == a) {
                b -= 1;
                a += 1;
            } else if (mx == b && mn == c) {
                b -= 1;
                c += 1;
            } else if (mx == c && mn == a) {
                c -= 1;
                a += 1;
            } else if (mx == c && mn == b) {
                c -= 1;
                b += 1;
            }
            
            rounds++;
        }
        
        cout << rounds << "\n";
    }

    return 0;
}