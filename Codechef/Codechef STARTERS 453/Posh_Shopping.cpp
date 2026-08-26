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

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <int> prices;

    int t;
    if(!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        while (n--) {
            int c;
            cin >> c;
            prices.push_back(c);
        }

    }


    // sort(prices.begin(),prices.end());

    for (int i = 0; i<= prices.size()-1; i++) {
        for (int j = 0; j<=prices.size()-1; j++) {
            if (prices[i]>=prices[j]) {
                cout << prices[i] << endl;
            } else if (prices[i]<=prices[j]) {
                cout << prices[j] + prices[i] << endl;
            }
        }
    }

    return 0;


}