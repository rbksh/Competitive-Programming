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

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    if (t>=1 && t<=100) {
        while (t--) {
            int x,y;
            cin >> x >> y;
            if (x>=1 && y>=1 && x<=100 && y<=100) {
                if (x<y) {
                    cout << "NO" << endl;
                } else if (x>=y) {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;

}