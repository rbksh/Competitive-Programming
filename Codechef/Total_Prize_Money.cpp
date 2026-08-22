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
    if (t>=1 && t<=1000) {
        while (t--) {
            int x,y;
            cin >> x >> y;
            if (x>=1 && y>=1 && x<=1000 && y<=1000) {
                int topPrize = 10*x;
                int leftPrize = 90*y;
                int totalPrize = topPrize + leftPrize;
                cout << totalPrize << endl;
            }
        }
    }
    return 0;

}