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
        while (t--){
            int x,n;
            cin >> x >> n;
            if (x>=10 && x<=200 && n>=0 && n<=10) {
                int pointsTC = x/10;
                int totalPoints = pointsTC*n;
                cout << totalPoints << endl;
            }
        }
    }
    return 0;
}