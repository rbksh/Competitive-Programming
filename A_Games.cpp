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

    int n; cin >> n;
    int count = 0;
    vector <pair<int,int>> colors;
    while (n--) {
        int h; int a; cin >> h >> a;
        pair <int,int> p(h,a);
        colors.push_back(p);
    }
    for (int i = 0; i < colors.size(); i++) {
        for (int j = 0; j < colors.size(); j++) {
            if (i != j && colors[i].first == colors[j].second) {
                count++;
            }
        }
    }
    cout << count << endl;
}