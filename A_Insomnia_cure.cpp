#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,l,m,n,d; cin >> k >> l >> m >> n >> d;
    vector <int> dragonIndex(d,1);
    int dragonCount = 0;
    for (int i = 1; i <= d; i++) { //instead of trying to find a specific permutation for each case other than the base case scenario, manually iterate thru each dragon index and check if it is a multiple of the given numbers;
        if (i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) {
            dragonCount++;
        }
    }
    cout << dragonCount << endl;
    return 0;
    
}